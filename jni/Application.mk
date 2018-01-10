APP_STL := c++_shared

APP_CPPFLAGS := -ffunction-sections -funwind-tables -fstack-protector-strong \
-no-canonical-prefixes -march=armv7-a -mfloat-abi=softfp -mfpu=vfpv3-d16 \
-fno-integrated-as -marm -mfpu=neon -Wa,--noexecstack -Wformat \
-Werror=format-security -std=c++14 -Werror -fno-rtti \
-fsanitize=address -fno-omit-frame-pointer -Os -DNDEBUG  \
-fPIC -fexceptions 

APP_LDFLAGS := -fexceptions -fsanitize=address
APP_PLATFORM := android-25

APP_ABI := armeabi-v7a
