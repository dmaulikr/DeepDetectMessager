//
//  COVIASv1API.h
//  DeepDetectChatBots
//
//  Created by yangboz on 24/03/2017.
//  Copyright © 2017 ___SMARTKIT.INFO___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SearchExistedVO.h"
#import "SearchResponseVO.h"    
#import "COVIASv1Model.h"

@interface COVIASv1API : NSObject
+(COVIASv1API *)sharedInstance;
-(void)searchWithImage:(UIImage*)image byIndex:(NSString *)index byItem:(NSString *)item;
-(void)searchWithId:(NSString*)esId byIndex:(NSString *)index byItem:(NSString *)item;
@end
