
APP_NAME = 'Remote Assistance'
APP_SNAME = 'deepin-remote-assistance'
LOCALE_DIR = '/usr/share/locale'
ICON_NAME = APP_SNAME
# Absolute path to icon file
# This image file is used as window icon
ICON_PATH = '/usr/share/icons/hicolor/64x64/apps/%s.png' % ICON_NAME

NETWORK_UNKNOWN = 0
NETWORK_CONNECTED = 1
NETWORK_DISCONNECTED = 2

# Neither client side nor server side is running
MANAGER_STATUS_UNINITIALIZED = 0

# Client side is running
MANAGER_STATUS_CLIENT = 1

# Server side is running
MANAGER_STATUS_SERVER = 2
