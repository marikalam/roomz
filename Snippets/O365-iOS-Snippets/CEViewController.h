//
//  CEViewController.h
//  O365-iOS-Snippets
//
//  Created by Jianfu Zhang on 6/9/16.
//  Copyright © 2016 Microsoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CEViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *subject;

@property (weak, nonatomic) IBOutlet UITextField *start;
@property (weak, nonatomic) IBOutlet UITextField *end;
@property (weak, nonatomic) IBOutlet UITextField *location;

@property (weak, nonatomic) IBOutlet UIButton *Create;
@end
