const struct Evolution gEvolutionTable[NUM_SPECIES][EVOS_PER_MON] =
{
    [SPECIES_BULBASAUR]  = {{EVO_BASIC, 16, SPECIES_IVYSAUR}},
    [SPECIES_IVYSAUR]    = {{EVO_BASIC, 32, SPECIES_VENUSAUR}},
    [SPECIES_CHARMANDER] = {{EVO_BASIC, 16, SPECIES_CHARMELEON}},
    [SPECIES_CHARMELEON] = {{EVO_BASIC, 36, SPECIES_CHARIZARD}},
    [SPECIES_SQUIRTLE]   = {{EVO_BASIC, 16, SPECIES_WARTORTLE}},
    [SPECIES_WARTORTLE]  = {{EVO_BASIC, 36, SPECIES_BLASTOISE}},
    [SPECIES_CATERPIE]   = {{EVO_BASIC,  7, SPECIES_METAPOD}},
    [SPECIES_METAPOD]    = {{EVO_BASIC, 10, SPECIES_BUTTERFREE}},
    [SPECIES_WEEDLE]     = {{EVO_BASIC,  7, SPECIES_KAKUNA}},
    [SPECIES_KAKUNA]     = {{EVO_BASIC, 10, SPECIES_BEEDRILL}},
    [SPECIES_PIDGEY]     = {{EVO_BASIC, 18, SPECIES_PIDGEOTTO}},
    [SPECIES_PIDGEOTTO]  = {{EVO_BASIC, 36, SPECIES_PIDGEOT}},
    [SPECIES_RATTATA]    = {{EVO_BASIC, 20, SPECIES_RATICATE}},
    [SPECIES_SPEAROW]    = {{EVO_BASIC, 20, SPECIES_FEAROW}},
    [SPECIES_EKANS]      = {{EVO_BASIC, 22, SPECIES_ARBOK}},
    [SPECIES_PICHU]      = {{EVO_BASIC, 16, SPECIES_PIKACHU}},
    [SPECIES_PIKACHU]    = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_RAICHU}},
    [SPECIES_SANDSHREW]  = {{EVO_BASIC, 22, SPECIES_SANDSLASH}},
    [SPECIES_NIDORAN_F]  = {{EVO_BASIC, 16, SPECIES_NIDORINA}},
    [SPECIES_NIDORINA]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOQUEEN}},
    [SPECIES_NIDORAN_M]  = {{EVO_BASIC, 16, SPECIES_NIDORINO}},
    [SPECIES_NIDORINO]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOKING}},
    [SPECIES_CLEFFA]     = {{EVO_BASIC, 16, SPECIES_CLEFAIRY}},
    [SPECIES_CLEFAIRY]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE}},
    [SPECIES_VULPIX]     = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}},
    [SPECIES_IGGLYBUFF]  = {{EVO_BASIC, 16, SPECIES_JIGGLYPUFF}},
    [SPECIES_JIGGLYPUFF] = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF}},
    [SPECIES_ZUBAT]      = {{EVO_BASIC, 22, SPECIES_GOLBAT}},
    [SPECIES_GOLBAT]     = {{EVO_BASIC, 43, SPECIES_CROBAT}},
    [SPECIES_ODDISH]     = {{EVO_BASIC, 21, SPECIES_GLOOM}},
    [SPECIES_GLOOM]      = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VILEPLUME},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM}},
    [SPECIES_PARAS]      = {{EVO_BASIC, 24, SPECIES_PARASECT}},
    [SPECIES_VENONAT]    = {{EVO_BASIC, 31, SPECIES_VENOMOTH}},
    [SPECIES_DIGLETT]    = {{EVO_BASIC, 26, SPECIES_DUGTRIO}},
    [SPECIES_MEOWTH]     = {{EVO_BASIC, 28, SPECIES_PERSIAN}},
    [SPECIES_PSYDUCK]    = {{EVO_BASIC, 33, SPECIES_GOLDUCK}},
    [SPECIES_MANKEY]     = {{EVO_BASIC, 28, SPECIES_PRIMEAPE}},
    [SPECIES_GROWLITHE]  = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}},
    [SPECIES_POLIWAG]    = {{EVO_BASIC, 25, SPECIES_POLIWHIRL}},
    [SPECIES_POLIWHIRL]  = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_POLIWRATH},
                            {EVO_RAIN,  42, SPECIES_POLITOED}},
    [SPECIES_ABRA]       = {{EVO_BASIC, 16, SPECIES_KADABRA}},
    [SPECIES_KADABRA]    = {{EVO_ITEM_HOLD, 42, SPECIES_ALAKAZAM, ITEM_TWISTED_SPOON}},
    [SPECIES_MACHOP]     = {{EVO_BASIC, 28, SPECIES_MACHOKE}},
    [SPECIES_MACHOKE]    = {{EVO_BASIC, 50, SPECIES_MACHAMP}},
    [SPECIES_BELLSPROUT] = {{EVO_BASIC, 21, SPECIES_WEEPINBELL}},
    [SPECIES_WEEPINBELL] = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VICTREEBEL}},
    [SPECIES_TENTACOOL]  = {{EVO_BASIC, 30, SPECIES_TENTACRUEL}},
    [SPECIES_GEODUDE]    = {{EVO_BASIC, 25, SPECIES_GRAVELER}},
    [SPECIES_GRAVELER]   = {{EVO_BASIC, 45, SPECIES_GOLEM}},
    [SPECIES_PONYTA]     = {{EVO_BASIC, 40, SPECIES_RAPIDASH}},
    [SPECIES_SLOWPOKE]   = {{EVO_SPECIES_IN_PARTY, 37, SPECIES_SLOWBRO, SPECIES_SHELLDER},
                            {EVO_SPECIES_IN_PARTY, 37, SPECIES_SLOWKING}, SPECIES_CLOYSTER},
    [SPECIES_MAGNEMITE]  = {{EVO_BASIC, 30, SPECIES_MAGNETON}},
    [SPECIES_DODUO]      = {{EVO_BASIC, 31, SPECIES_DODRIO}},
    [SPECIES_SEEL]       = {{EVO_BASIC, 34, SPECIES_DEWGONG}},
    [SPECIES_GRIMER]     = {{EVO_BASIC, 38, SPECIES_MUK}},
    [SPECIES_SHELLDER]   = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_CLOYSTER}},
    [SPECIES_GASTLY]     = {{EVO_BASIC, 25, SPECIES_HAUNTER}},
    [SPECIES_HAUNTER]    = {{EVO_BASIC, 45, SPECIES_GENGAR}},
    [SPECIES_ONIX]       = {{EVO_ITEM_HOLD, 40, SPECIES_STEELIX, ITEM_METAL_COAT}},
    [SPECIES_DROWZEE]    = {{EVO_BASIC, 26, SPECIES_HYPNO}},
    [SPECIES_KRABBY]     = {{EVO_BASIC, 28, SPECIES_KINGLER}},
    [SPECIES_VOLTORB]    = {{EVO_BASIC, 30, SPECIES_ELECTRODE}},
    [SPECIES_EXEGGCUTE]  = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR}},
    [SPECIES_CUBONE]     = {{EVO_BASIC, 28, SPECIES_MAROWAK}},
    [SPECIES_KOFFING]    = {{EVO_BASIC, 35, SPECIES_WEEZING}},
    [SPECIES_RHYHORN]    = {{EVO_BASIC, 42, SPECIES_RHYDON}},
    [SPECIES_CHANSEY]    = {{EVO_CHAMPION, 0, SPECIES_BLISSEY}},
    [SPECIES_HORSEA]     = {{EVO_BASIC, 32, SPECIES_SEADRA}},
    [SPECIES_SEADRA]     = {{EVO_ITEM_HOLD, 50, SPECIES_KINGDRA, ITEM_DRAGON_SCALE}},
    [SPECIES_GOLDEEN]    = {{EVO_BASIC, 33, SPECIES_SEAKING}},
    [SPECIES_STARYU]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}},
    [SPECIES_SCYTHER]    = {{EVO_ITEM_HOLD, 40, SPECIES_SCIZOR, ITEM_METAL_COAT}},
    [SPECIES_MAGIKARP]   = {{EVO_BASIC, 20, SPECIES_GYARADOS}},
    [SPECIES_EEVEE]      = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                            {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                            {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                            {EVO_DAY, 0, SPECIES_ESPEON},
                            {EVO_NIGHT, 0, SPECIES_UMBREON}},
    [SPECIES_PORYGON]    = {{EVO_ITEM_HOLD, 36, SPECIES_PORYGON2, ITEM_UP_GRADE}},
    [SPECIES_OMANYTE]    = {{EVO_BASIC, 40, SPECIES_OMASTAR}},
    [SPECIES_KABUTO]     = {{EVO_BASIC, 40, SPECIES_KABUTOPS}},
    [SPECIES_DRATINI]    = {{EVO_BASIC, 30, SPECIES_DRAGONAIR}},
    [SPECIES_DRAGONAIR]  = {{EVO_BASIC, 55, SPECIES_DRAGONITE}},
    [SPECIES_CHIKORITA]  = {{EVO_BASIC, 16, SPECIES_BAYLEEF}},
    [SPECIES_BAYLEEF]    = {{EVO_BASIC, 32, SPECIES_MEGANIUM}},
    [SPECIES_CYNDAQUIL]  = {{EVO_BASIC, 14, SPECIES_QUILAVA}},
    [SPECIES_QUILAVA]    = {{EVO_BASIC, 36, SPECIES_TYPHLOSION}},
    [SPECIES_TOTODILE]   = {{EVO_BASIC, 18, SPECIES_CROCONAW}},
    [SPECIES_CROCONAW]   = {{EVO_BASIC, 30, SPECIES_FERALIGATR}},
    [SPECIES_SENTRET]    = {{EVO_BASIC, 15, SPECIES_FURRET}},
    [SPECIES_HOOTHOOT]   = {{EVO_BASIC, 20, SPECIES_NOCTOWL}},
    [SPECIES_LEDYBA]     = {{EVO_BASIC, 18, SPECIES_LEDIAN}},
    [SPECIES_SPINARAK]   = {{EVO_BASIC, 22, SPECIES_ARIADOS}},
    [SPECIES_CHINCHOU]   = {{EVO_BASIC, 27, SPECIES_LANTURN}},
    [SPECIES_TOGEPI]     = {{EVO_BASIC, 16, SPECIES_TOGETIC}},
    [SPECIES_NATU]       = {{EVO_BASIC, 25, SPECIES_XATU}},
    [SPECIES_MAREEP]     = {{EVO_BASIC, 15, SPECIES_FLAAFFY}},
    [SPECIES_FLAAFFY]    = {{EVO_BASIC, 30, SPECIES_AMPHAROS}},
    [SPECIES_AZURILL]    = {{EVO_BASIC, 16, SPECIES_MARILL}},
    [SPECIES_MARILL]     = {{EVO_BASIC, 18, SPECIES_AZUMARILL}},
    [SPECIES_HOPPIP]     = {{EVO_BASIC, 18, SPECIES_SKIPLOOM}},
    [SPECIES_SKIPLOOM]   = {{EVO_BASIC, 27, SPECIES_JUMPLUFF}},
    [SPECIES_SUNKERN]    = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA}},
    [SPECIES_WOOPER]     = {{EVO_BASIC, 20, SPECIES_QUAGSIRE}},
    [SPECIES_PINECO]     = {{EVO_BASIC, 31, SPECIES_FORRETRESS}},
    [SPECIES_SNUBBULL]   = {{EVO_BASIC, 23, SPECIES_GRANBULL}},
    [SPECIES_TEDDIURSA]  = {{EVO_BASIC, 30, SPECIES_URSARING}},
    [SPECIES_SLUGMA]     = {{EVO_BASIC, 38, SPECIES_MAGCARGO}},
    [SPECIES_SWINUB]     = {{EVO_BASIC, 33, SPECIES_PILOSWINE}},
    [SPECIES_REMORAID]   = {{EVO_BASIC, 25, SPECIES_OCTILLERY}},
    [SPECIES_HOUNDOUR]   = {{EVO_BASIC, 24, SPECIES_HOUNDOOM}},
    [SPECIES_PHANPY]     = {{EVO_BASIC, 25, SPECIES_DONPHAN}},
    [SPECIES_TYROGUE]    = {{EVO_ATK_LT_DEF, 20, SPECIES_HITMONCHAN},
                            {EVO_ATK_GT_DEF, 20, SPECIES_HITMONLEE},
                            {EVO_ATK_EQ_DEF, 20, SPECIES_HITMONTOP}},
    [SPECIES_SMOOCHUM]   = {{EVO_BASIC, 30, SPECIES_JYNX}},
    [SPECIES_ELEKID]     = {{EVO_BASIC, 30, SPECIES_ELECTABUZZ}},
    [SPECIES_MAGBY]      = {{EVO_BASIC, 30, SPECIES_MAGMAR}},
    [SPECIES_LARVITAR]   = {{EVO_BASIC, 30, SPECIES_PUPITAR}},
    [SPECIES_PUPITAR]    = {{EVO_BASIC, 55, SPECIES_TYRANITAR}},
    [SPECIES_TREECKO]    = {{EVO_BASIC, 16, SPECIES_GROVYLE}},
    [SPECIES_GROVYLE]    = {{EVO_BASIC, 36, SPECIES_SCEPTILE}},
    [SPECIES_TORCHIC]    = {{EVO_BASIC, 16, SPECIES_COMBUSKEN}},
    [SPECIES_COMBUSKEN]  = {{EVO_BASIC, 36, SPECIES_BLAZIKEN}},
    [SPECIES_MUDKIP]     = {{EVO_BASIC, 16, SPECIES_MARSHTOMP}},
    [SPECIES_MARSHTOMP]  = {{EVO_BASIC, 36, SPECIES_SWAMPERT}},
    [SPECIES_POOCHYENA]  = {{EVO_BASIC, 18, SPECIES_MIGHTYENA}},
    [SPECIES_ZIGZAGOON]  = {{EVO_BASIC, 20, SPECIES_LINOONE}},
    [SPECIES_WURMPLE]    = {{EVO_DAY, 7, SPECIES_SILCOON},
                            {EVO_NIGHT, 7, SPECIES_CASCOON}},
    [SPECIES_SILCOON]    = {{EVO_BASIC, 10, SPECIES_BEAUTIFLY}},
    [SPECIES_CASCOON]    = {{EVO_BASIC, 10, SPECIES_DUSTOX}},
    [SPECIES_LOTAD]      = {{EVO_BASIC, 14, SPECIES_LOMBRE}},
    [SPECIES_LOMBRE]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO}},
    [SPECIES_SEEDOT]     = {{EVO_BASIC, 14, SPECIES_NUZLEAF}},
    [SPECIES_NUZLEAF]    = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SHIFTRY}},
    [SPECIES_NINCADA]    = {{EVO_NINJASK, 20, SPECIES_NINJASK},
                            {EVO_SHEDINJA, 20, SPECIES_SHEDINJA}},
    [SPECIES_TAILLOW]    = {{EVO_BASIC, 22, SPECIES_SWELLOW}},
    [SPECIES_SHROOMISH]  = {{EVO_BASIC, 23, SPECIES_BRELOOM}},
    [SPECIES_WINGULL]    = {{EVO_BASIC, 25, SPECIES_PELIPPER}},
    [SPECIES_SURSKIT]    = {{EVO_BASIC, 22, SPECIES_MASQUERAIN}},
    [SPECIES_WAILMER]    = {{EVO_BASIC, 40, SPECIES_WAILORD}},
    [SPECIES_SKITTY]     = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_DELCATTY}},
    [SPECIES_BALTOY]     = {{EVO_BASIC, 36, SPECIES_CLAYDOL}},
    [SPECIES_BARBOACH]   = {{EVO_BASIC, 30, SPECIES_WHISCASH}},
    [SPECIES_CORPHISH]   = {{EVO_BASIC, 30, SPECIES_CRAWDAUNT}},
    [SPECIES_FEEBAS]     = {{EVO_CONTEST, CONTEST_CATEGORY_BEAUTY, SPECIES_MILOTIC}},
    [SPECIES_CARVANHA]   = {{EVO_BASIC, 30, SPECIES_SHARPEDO}},
    [SPECIES_TRAPINCH]   = {{EVO_BASIC, 35, SPECIES_VIBRAVA}},
    [SPECIES_VIBRAVA]    = {{EVO_BASIC, 45, SPECIES_FLYGON}},
    [SPECIES_MAKUHITA]   = {{EVO_BASIC, 24, SPECIES_HARIYAMA}},
    [SPECIES_ELECTRIKE]  = {{EVO_BASIC, 26, SPECIES_MANECTRIC}},
    [SPECIES_NUMEL]      = {{EVO_BASIC, 33, SPECIES_CAMERUPT}},
    [SPECIES_SPHEAL]     = {{EVO_BASIC, 32, SPECIES_SEALEO}},
    [SPECIES_SEALEO]     = {{EVO_BASIC, 44, SPECIES_WALREIN}},
    [SPECIES_CACNEA]     = {{EVO_BASIC, 32, SPECIES_CACTURNE}},
    [SPECIES_SNORUNT]    = {{EVO_BASIC, 42, SPECIES_GLALIE}},
    [SPECIES_SPOINK]     = {{EVO_BASIC, 32, SPECIES_GRUMPIG}},
    [SPECIES_MEDITITE]   = {{EVO_BASIC, 37, SPECIES_MEDICHAM}},
    [SPECIES_SWABLU]     = {{EVO_BASIC, 35, SPECIES_ALTARIA}},
    [SPECIES_WYNAUT]     = {{EVO_BASIC, 15, SPECIES_WOBBUFFET}},
    [SPECIES_DUSKULL]    = {{EVO_BASIC, 37, SPECIES_DUSCLOPS}},
    [SPECIES_SLAKOTH]    = {{EVO_BASIC, 18, SPECIES_VIGOROTH}},
    [SPECIES_VIGOROTH]   = {{EVO_BASIC, 36, SPECIES_SLAKING}},
    [SPECIES_GULPIN]     = {{EVO_BASIC, 26, SPECIES_SWALOT}},
    [SPECIES_WHISMUR]    = {{EVO_BASIC, 20, SPECIES_LOUDRED}},
    [SPECIES_LOUDRED]    = {{EVO_BASIC, 40, SPECIES_EXPLOUD}},
    [SPECIES_CLAMPERL]   = {{EVO_ITEM_HOLD, 20, SPECIES_HUNTAIL, ITEM_DEEP_SEA_TOOTH},
                            {EVO_ITEM_HOLD, 20, SPECIES_GOREBYSS, ITEM_DEEP_SEA_SCALE}},
    [SPECIES_SHUPPET]    = {{EVO_BASIC, 37, SPECIES_BANETTE}},
    [SPECIES_ARON]       = {{EVO_BASIC, 32, SPECIES_LAIRON}},
    [SPECIES_LAIRON]     = {{EVO_BASIC, 42, SPECIES_AGGRON}},
    [SPECIES_LILEEP]     = {{EVO_BASIC, 40, SPECIES_CRADILY}},
    [SPECIES_ANORITH]    = {{EVO_BASIC, 40, SPECIES_ARMALDO}},
    [SPECIES_RALTS]      = {{EVO_BASIC, 20, SPECIES_KIRLIA}},
    [SPECIES_KIRLIA]     = {{EVO_BASIC, 30, SPECIES_GARDEVOIR}},
    [SPECIES_BAGON]      = {{EVO_BASIC, 30, SPECIES_SHELGON}},
    [SPECIES_SHELGON]    = {{EVO_BASIC, 50, SPECIES_SALAMENCE}},
    [SPECIES_BELDUM]     = {{EVO_BASIC, 20, SPECIES_METANG}},
    [SPECIES_METANG]     = {{EVO_BASIC, 45, SPECIES_METAGROSS}},
};
