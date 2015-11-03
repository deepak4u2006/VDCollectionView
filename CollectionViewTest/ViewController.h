//
//  ViewController.h
//  CollectionViewTest
//
//  Created by Vishwa Deepak on 03/11/15.
//  Copyright © 2015 Vishwa Deepak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDataSource, UICollectionViewDelegate>
{
    __weak IBOutlet UICollectionView *vdCollectionView;

}


@end

