/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCard : NSObject <NSSecureCoding> {
    NSArray * _cardSections;
    NSString * _title;
    NSString * _type;
}

@property (copy) NSArray *cardSections;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardSections;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadCardSectionsWithCompletionAndErrorHandler:(id /* block */)arg1;
- (void)loadCardSectionsWithCompletionHandler:(id /* block */)arg1;
- (void)setCardSections:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (id)title;
- (id)type;

@end
