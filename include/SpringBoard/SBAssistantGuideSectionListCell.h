/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class AFUIUtteranceView;

@interface SBAssistantGuideSectionListCell : SBUnknownSuperclass {
	AFUIUtteranceView *_bubbleView;	// 244 = 0xf4
	CGSize _currentSize;	// 248 = 0xf8
}
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x19d3f5
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x19d1f1
- (void)dealloc;	// 0x19d3a9
- (void)setPhrase:(id)phrase;	// 0x19d2e5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x19d2b1
- (void)layoutSubviews;	// 0x19d221
- (float)currentHeight;	// 0x19d1dd
@end
