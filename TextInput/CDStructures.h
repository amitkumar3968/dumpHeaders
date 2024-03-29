/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct Bucket<KB::String, KB::FPoint>;

struct Bucket<KB::String, KB::Word>;

struct CGPoint {
    float _field1;
    float _field2;
};

struct DictionaryContainer;

struct HashTraits<KB::String>;

struct Hashmap<KB::String, KB::FPoint> {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    _Bool _field6;
    struct HashTraits<KB::String> _field7;
    struct Bucket<KB::String, KB::FPoint> *_field8;
    struct Bucket<KB::String, KB::FPoint> *_field9;
};

struct Hashmap<KB::String, KB::Word> {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    _Bool _field6;
    struct HashTraits<KB::String> _field7;
    struct Bucket<KB::String, KB::Word> *_field8;
    struct Bucket<KB::String, KB::Word> *_field9;
};

struct Input;

struct KeyboardLayout;

struct LinguisticTagDistribution;

struct LinguisticTagWeights;

struct Logger;

struct RefPtr<KB::DictionaryContainer> {
    struct DictionaryContainer *_field1;
};

struct RefPtr<KB::LinguisticTagDistribution> {
    struct LinguisticTagDistribution *_field1;
};

struct RefPtr<KB::LinguisticTagWeights> {
    struct LinguisticTagWeights *_field1;
};

struct RefPtr<TI::Favonius::KeyboardLayout> {
    struct KeyboardLayout *_field1;
};

struct RefPtr<TI::Favonius::LayoutKey>;

struct RefPtr<TI::Favonius::Logger> {
    struct Logger *_field1;
};

struct RefPtr<TIAutoshiftRegularExpression> {
    struct TIAutoshiftRegularExpression *m_ptr;
};

struct String {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned char _field5;
    char *_field6;
    char _field7[16];
};

struct StrokeBuildManager;

struct TIAutoshiftRegularExpression;

struct TIInputManagerZephyr {
    void **_field1;
    struct vector<KB::Input, std::allocator<KB::Input>> _field2;
    struct String _field3;
    struct String _field4;
    unsigned int _field5;
    unsigned int _field6;
    struct Hashmap<KB::String, KB::Word> _field7;
    _Bool _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    struct __CFString *_field14;
    struct __CFLocale *_field15;
    struct RefPtr<KB::DictionaryContainer> _field16;
    _Bool _field17;
    _Bool _field18;
    struct StrokeBuildManager *_field19;
    struct String _field20;
    struct Hashmap<KB::String, KB::FPoint> _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> _field25;
    struct RefPtr<TI::Favonius::KeyboardLayout> _field26;
    struct String _field27;
    struct vector<KB::String, std::allocator<KB::String>> _field28;
    struct RefPtr<TI::Favonius::Logger> _field29;
};

struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> {
    unsigned int _field1;
    struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> _field2;
};

struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> {
    struct RefPtr<TI::Favonius::LayoutKey> *_field1;
    unsigned int _field2;
};

struct Word {
    struct String _field1;
    struct String _field2;
    float _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    float _field10;
    unsigned char _field11;
    unsigned int _field12;
    struct RefPtr<KB::LinguisticTagDistribution> _field13;
    struct RefPtr<KB::LinguisticTagWeights> _field14;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _Vector_impl {
    struct Input *_field1;
    struct Input *_field2;
    struct Input *_field3;
};

struct __CFString;

struct vector<KB::Input, std::allocator<KB::Input>> {
    struct _Vector_impl _field1;
};

struct vector<KB::String, std::allocator<KB::String>> {
    struct _Vector_impl _field1;
};

