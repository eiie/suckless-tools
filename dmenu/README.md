# dmenu #

## Section Name ##

```
cd suckless-tools/dmenu
make && sudo make install
```

## Passmenu ##

Dependencies :

- xdotool
- xclip


## Troubleshooting ##

There is a known issue on locale support : "warning: no locale support"
Solution : add to the file /usr/local/bin/dmenu_run the line "LANG=fr_FT.UTF-8"

