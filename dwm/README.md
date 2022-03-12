# dwm #

## Patches ##

- azerty
- noborder
- status-cmd-nosignal
- autostart

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
