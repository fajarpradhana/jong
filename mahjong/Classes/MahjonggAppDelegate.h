//
//  MahjonggAppDelegate.h
//  Mahjongg
//
//  Created by GamePipe Iphone Dev on 7/28/09.
//  Copyright USC 2009. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AdManager.h"


@interface MahjonggAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    UIViewController *placeHolderViewController;
    UIView *gameView;
    AdManager* adManager;
}

@end
