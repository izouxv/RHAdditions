//
//  NSArray+RHNumberAdditions.h
//
//  Created by Richard Heard on 15/07/13.
//  Copyright (c) 2013 Richard Heard. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions
//  are met:
//  1. Redistributions of source code must retain the above copyright
//  notice, this list of conditions and the following disclaimer.
//  2. Redistributions in binary form must reproduce the above copyright
//  notice, this list of conditions and the following disclaimer in the
//  documentation and/or other materials provided with the distribution.
//  3. The name of the author may not be used to endorse or promote products
//  derived from this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
//  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
//  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
//  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
//  NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
//  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
//  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
//  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#import <Foundation/Foundation.h>

@interface NSArray (RHNumberAdditions)

-(NSNumber *)numberAtIndex:(NSUInteger)index; // NSNumber or nil

//primitive getters
-(BOOL)boolAtIndex:(NSUInteger)index;
-(int)intAtIndex:(NSUInteger)index;
-(long)longAtIndex:(NSUInteger)index;
-(unsigned long)unsignedLongAtIndex:(NSUInteger)index;
-(long long)longLongAtIndex:(NSUInteger)index;
-(unsigned long long)unsignedLongLongAtIndex:(NSUInteger)index;
-(double)doubleAtIndex:(NSUInteger)index;
-(float)floatAtIndex:(NSUInteger)index;
-(NSInteger)integerAtIndex:(NSUInteger)index;
-(NSUInteger)usignedIntegerAtIndex:(NSUInteger)index;

@end

@interface NSMutableArray (RHNumberAdditions)

//primitive additions
-(void)addBool:(BOOL)value;
-(void)addInt:(int)value;
-(void)addLong:(long)value;
-(void)addUnsignedLong:(unsigned long)value;
-(void)addLongLong:(long long)value;
-(void)addUnsignedLongLong:(unsigned long long)value;
-(void)addDouble:(double)value;
-(void)addFloat:(float)value;
-(void)addInteger:(NSInteger)value;
-(void)addUnsignedInteger:(NSUInteger)value;

//primitive insertions
-(void)insertBool:(BOOL)value atIndex:(NSUInteger)index;
-(void)insertInt:(int)value atIndex:(NSUInteger)index;
-(void)insertLong:(long)value atIndex:(NSUInteger)index;
-(void)insertLongLong:(long long)value atIndex:(NSUInteger)index;
-(void)insertUnsignedLongLong:(unsigned long long)value atIndex:(NSUInteger)index;
-(void)insertDouble:(double)value atIndex:(NSUInteger)index;
-(void)insertFloat:(float)value atIndex:(NSUInteger)index;
-(void)insertInteger:(NSInteger)value atIndex:(NSUInteger)index;
-(void)insertUnsignedInteger:(NSUInteger)value atIndex:(NSUInteger)index;

@end


