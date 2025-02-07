//
//  streamdeck.h
//  Hammerspoon
//
//  Created by Chris Jones on 07/09/2017.
//  Copyright © 2017 Hammerspoon. All rights reserved.
//

#ifndef streamdeck_h
#define streamdeck_h

#pragma mark - Global variables
extern LSRefTable streamDeckRefTable;
static const char *USERDATA_TAG = "hs.streamdeck";

#define USB_VID_ELGATO                 0x0fd9

#define USB_PID_STREAMDECK_ORIGINAL    0x0060
#define USB_PID_STREAMDECK_ORIGINAL_V2 0x006d
#define USB_PID_STREAMDECK_MINI        0x0063
#define USB_PID_STREAMDECK_MINI_V2     0x0090
#define USB_PID_STREAMDECK_XL          0x006c
#define USB_PID_STREAMDECK_MK2         0x0080
#define USB_PID_STREAMDECK_PLUS        0x0084
#define USB_PID_STREAMDECK_PEDAL       0x0086

#endif /* streamdeck_h */
