//
//  FCViewController.m
//  FCMediaKit
//
//  Created by xiaoguai on 01/26/2024.
//  Copyright (c) 2024 xiaoguai. All rights reserved.
//

#import "FCViewController.h"
#import <FCMediaKit/CameraMediakit.h>

@interface FCViewController ()

@end

@implementation FCViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        CameraMediakit *handle = [CameraMediakit sharedInstance];
        [handle setup:^(NSString * _Nonnull rtspPath) {
            NSString *tmpRTSPPath = [NSString stringWithFormat:@"rtsp://192.168.0.110:8554/%@",rtspPath];
            NSLog(@"收到的路径是: %@", tmpRTSPPath);
            
//            [mediaplayer setMedia:[VLCMedia mediaWithURL:[NSURL URLWithString:tmpRTSPPath]]];
//            dispatch_async(dispatch_get_main_queue(), ^{
//                // 高优先级任务
//                [mediaplayer play];
//            });
        }];
    });
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
