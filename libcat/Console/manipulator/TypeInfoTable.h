//
//  TypeInfoTable.h
//  TestApp
//
//  Created by WooKyoung Noh on 13/02/11.
//  Copyright 2011 factorcat. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface TypeInfoTable : NSObject {
	NSDictionary* typedefTable;
	NSDictionary* propertyTable;
}
@property (nonatomic, retain)	NSDictionary* typedefTable;
@property (nonatomic, retain)	NSDictionary* propertyTable;

-(void) load_property_table ;
-(void) load_typedef_table ;
-(NSString*) objectDescription:(id)obj targetClass:(NSString*)targetClass propertyName:(NSString*)propertyName ;
@end