//
//  ViewController.h
//  ScrollViewDemo
//
//  Created by malay pankhaniya on 05/06/13.
//  Copyright (c) 2013 Axat-tech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIScrollViewDelegate>
{
    IBOutlet UIView *viewObj;
    IBOutlet UIScrollView *scrollviewobj;
}
@property(nonatomic,retain)IBOutlet UIView *viewObj;
@property(nonatomic,retain)IBOutlet UIScrollView *scrollviewobj;
@end
