
# Translation DB table design
-----------------------------------
| index | en | canonical-en | fr | es | de | CN | ...|
|---|---|---| ---|---|---|---|---|---|
| 1 | hello-world|NA|hello|world|defe|你好|...
| 2| feageg|...

# Main operations
## Build table
a. Scan resource files
b. Find key (canonical en) and values
c. Insert/Update row

## Append items
Use pre-defined format, just need a minor tool

## Update items
Same as above.

## Never remove items
