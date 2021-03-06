//
//  Video360ViewController.h
//  SlateVideo360
//
//  Created by linyize on 16/2/26.
//  Copyright © 2016年 islate. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HTY360PlayerVC.h"

@protocol VideoPlayerDelegate <NSObject>
@required
- (void)fullScreen;

@end

@interface Video360ViewController : HTY360PlayerVC

@property (nonatomic, weak, nullable) id <VideoPlayerDelegate>delegate;

@end
