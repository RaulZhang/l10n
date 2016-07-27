# Find not-translated strings

## Input
    prev-release resource file
    new-release resource file
    translation DB
## Output
    string-list to translate

# Get translation back, compose resource file
## Input
    translations
    resource file to modify
    en-resource file
## Output
    resource file.

# Verify all language packages are GOOD
## Input
    curr-release resource files
    translation DB
## Output
    GOOD or BAD.
    If BAD, point out where is the problem.

# Auto compose resource file according to translation table
## Input
    translation table
    resource file format
    en-resource file
## Output
    resource file
