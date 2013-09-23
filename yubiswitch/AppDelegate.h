//  AppDelegate.h
//  yubiswitch

/*
 yubiswitch - enable/disable yubikey
 Copyright (C) 2013  Angelo "pallotron" Failla <pallotron@freaknet.org>
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <Cocoa/Cocoa.h>
#import <Carbon/Carbon.h>

#import "YubiKey.h"
#import "AboutWindowController.h"

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    IBOutlet NSMenu *statusMenu;
    NSStatusItem * statusItem;
    bool isEnabled;
    YubiKey* yk;
    NSUserNotification *notification;
    AboutWindowController* aboutwc;
}

@property (assign) IBOutlet NSWindow *window;
-(IBAction)toggle:(id)sender;
-(IBAction)quit:(id)sender;
-(IBAction)about:(id)sender;
-(void)notify:(NSString *)msg;

@end
