# dwm #

## Patches ##

- azerty
- noborder
- status-cmd-nosignal
- autostart
- holdbar

## Installation ##

```
cd sucklesss-tools/dwm
make && sudo make install
```

## Running dwm ##

I'm using  lightdm to start dwm.

```
sudo bash -c 'cat << EOF > /usr/share/xsessions/dwm.desktop
[Desktop Entry]
Encoding=UTF-8
Name=dwm
Comment=Dynamic Window Manager
Exec=dwm
Icon=dwm
Type=XSession
EOF'
```

## Key bindings ##

- Mod : Super
- Mod + w : open firefox
- Mod + s : open passmenu
- Mod + Shift + L : lock with slock
- Mod + Shift + S : start capture with flameshot
