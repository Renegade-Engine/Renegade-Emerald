# Contribution guidelines

Thanks for taking the time to contribute.

Even if you are not a programmer, there are many things you can do to help with the development of Pokémon Renegade Emerald. The most valuable is playing the game and givin us some feedback:

- If you find an error, submit a [bug report](https://github.com/rglezg/Renegade-Emerald/issues/new?template=bug_report.md). Before doing that, check if what you found is a [known bug](https://github.com/rglezg/Renegade-Emerald/labels/bug).
- If you have an idea and think it fits well with this project, submit a [feature request](https://github.com/rglezg/Renegade-Emerald/issues/new?template=feature_request.md). Before doing that, check if it has already been [suggested](https://github.com/rglezg/Renegade-Emerald/labels/enhancement).
- If you have a question or want to start a discussion, just use the [issue tracker](https://github.com/rglezg/Renegade-Emerald/issues).

## Contributing code and content

We accept fixes and new features, as long as they are not listed in the [What this is NOT](https://github.com/rglezg/Renegade-Emerald/blob/repo/readme/README.md#what-is-this-not) section of the readme.  

### Getting started

Here are some resources to help you get started on how to contribute code or new content.

- Look at the [INSTALL.md](INSTALL.md) file to get started on building the source code on your own. You can also follow this [tutorial](https://www.pokecommunity.com/showthread.php?t=425246). Note it was wrote for the original pokeemerald repo.
- Check the ["Help wanted" issues](https://github.com/rglezg/Renegade-Emerald/labels/help%20wanted). If you find something that you can fix, leave a comment.  
- If you want to do a grammar/spelling or bug fix, feel free to start working in a fix.
- If you are submitting a feature or substantial code contribution, please [discuss](https://github.com/rglezg/Renegade-Emerald/issues/new?template=feature_request.md) it with the team.  
- You can check the [roadmap](https://github.com/rglezg/Renegade-Emerald/issues/7) and take whatever feature that is not completed or marked as WIP.

### Submiting a pull request

Pull requests are the best way to propose changes to the codebase. If you want to make a change:

1. Fork the repo.
2. Create a new branch:
   - If your change is independent of other features implemented in Renegade Emerald, and you think it can be applied to any pokeemerald repo, create it from branch `base`.
   - If it depends on any of the branches of the [rh-hidout expansion](https://github.com/rh-hideout/pokeemerald-expansion), (`pokemon_expansion` or `battle_engine`) create your branch from it.
   - If don't meet any of the provious conditions, create your branch from `main`.
  
3. Name the branch `feat/name_of_feature` if is a new feature, or `fix/name_of_problem` if is a bug or spelling fix.
4. [Create the pull request](https://github.com/rglezg/Renegade-Emerald/compare) for merging your changes into `main`.
5. Make your changes and test all of them.
6. Once you get your work done, remove the `work in progress` label and wait for a review.
