//
//  Photo.h
//  CodeDataTest
//
//  Created by Shinya OHNUMA on 10/11/16.
//  Copyright 2010 Arti Co. Ltd. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Photo :  NSManagedObject  
{
}

@property (nonatomic, retain) NSDate * created;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * note;
@property (nonatomic, retain) NSString * photoId;
@property (nonatomic, retain) NSData * image;

@end



