#pragma once
// IWYU pragma private; include "GlobalNamespace/NGramGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NGramGenerator)
namespace GlobalNamespace {
class NGramGenerator__MakeNgrams_d__11;
}
namespace GlobalNamespace {
class NGramGenerator___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class NGramGenerator;
}
namespace GlobalNamespace {
class NGramGenerator__MakeNgrams_d__11;
}
namespace GlobalNamespace {
class NGramGenerator___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NGramGenerator);
MARK_REF_PTR_T(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11);
MARK_REF_PTR_T(::GlobalNamespace::NGramGenerator___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NGramGenerator/<>c
class CORDL_TYPE NGramGenerator___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::NGramGenerator___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  __9__6_0;

/// @brief Field <>9__6_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_1, put=setStaticF___9__6_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,::StringW>*  __9__6_1;

/// @brief Field <>9__6_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_2, put=setStaticF___9__6_2)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  __9__6_2;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  __9__8_0;

/// @brief Field <>9__8_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_1, put=setStaticF___9__8_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,::StringW>*  __9__8_1;

/// @brief Field <>9__8_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_2, put=setStaticF___9__8_2)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  __9__8_2;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  __9__9_0;

/// @brief Field <>9__9_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_1, put=setStaticF___9__9_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,::StringW>*  __9__9_1;

/// @brief Field <>9__9_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_2, put=setStaticF___9__9_2)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  __9__9_2;

static inline ::GlobalNamespace::NGramGenerator___c* New_ctor() ;

/// @brief Method <GenerateBiGrams>b__8_0, addr 0x16bdb80, size 0x3c, virtual false, abstract: false, final false
inline int32_t _GenerateBiGrams_b__8_0(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  entry) ;

/// @brief Method <GenerateBiGrams>b__8_1, addr 0x16bdbbc, size 0x3c, virtual false, abstract: false, final false
inline ::StringW _GenerateBiGrams_b__8_1(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  pair) ;

/// @brief Method <GenerateBiGrams>b__8_2, addr 0x16bdbf8, size 0x3c, virtual false, abstract: false, final false
inline int32_t _GenerateBiGrams_b__8_2(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  pair) ;

/// @brief Method <GenerateLevenshteinDict>b__9_0, addr 0x16bdc34, size 0x3c, virtual false, abstract: false, final false
inline int32_t _GenerateLevenshteinDict_b__9_0(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  entry) ;

/// @brief Method <GenerateLevenshteinDict>b__9_1, addr 0x16bdc70, size 0x3c, virtual false, abstract: false, final false
inline ::StringW _GenerateLevenshteinDict_b__9_1(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  pair) ;

/// @brief Method <GenerateLevenshteinDict>b__9_2, addr 0x16bdcac, size 0x3c, virtual false, abstract: false, final false
inline int32_t _GenerateLevenshteinDict_b__9_2(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  pair) ;

/// @brief Method <OrderDictionary>b__6_0, addr 0x16bdacc, size 0x3c, virtual false, abstract: false, final false
inline int32_t _OrderDictionary_b__6_0(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  entry) ;

/// @brief Method <OrderDictionary>b__6_1, addr 0x16bdb08, size 0x3c, virtual false, abstract: false, final false
inline ::StringW _OrderDictionary_b__6_1(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  pair) ;

/// @brief Method <OrderDictionary>b__6_2, addr 0x16bdb44, size 0x3c, virtual false, abstract: false, final false
inline int32_t _OrderDictionary_b__6_2(::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>  pair) ;

/// @brief Method .ctor, addr 0x16bdac4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::NGramGenerator___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>* getStaticF___9__6_0() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,::StringW>* getStaticF___9__6_1() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>* getStaticF___9__6_2() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>* getStaticF___9__8_0() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,::StringW>* getStaticF___9__8_1() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>* getStaticF___9__8_2() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>* getStaticF___9__9_0() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,::StringW>* getStaticF___9__9_1() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>* getStaticF___9__9_2() ;

static inline void setStaticF___9(::GlobalNamespace::NGramGenerator___c*  value) ;

static inline void setStaticF___9__6_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  value) ;

static inline void setStaticF___9__6_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,::StringW>*  value) ;

static inline void setStaticF___9__6_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  value) ;

static inline void setStaticF___9__8_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  value) ;

static inline void setStaticF___9__8_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,::StringW>*  value) ;

static inline void setStaticF___9__8_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  value) ;

static inline void setStaticF___9__9_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,::StringW>*  value) ;

static inline void setStaticF___9__9_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,int32_t>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NGramGenerator___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NGramGenerator___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NGramGenerator___c(NGramGenerator___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NGramGenerator___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NGramGenerator___c(NGramGenerator___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NGramGenerator___c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NGramGenerator/<MakeNgrams>d__11
class CORDL_TYPE NGramGenerator__MakeNgrams_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_String__get_Current)) ::StringW  System_Collections_Generic_IEnumerator_System_String__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::StringW  __2__current;

/// @brief Field <>3__nGramSize, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get___3__nGramSize, put=__cordl_internal_set___3__nGramSize)) uint8_t  __3__nGramSize;

/// @brief Field <>3__text, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__text, put=__cordl_internal_set___3__text)) ::StringW  __3__text;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <i>5__6, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__6, put=__cordl_internal_set__i_5__6)) int32_t  _i_5__6;

/// @brief Field <lastWordLen>5__5, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWordLen_5__5, put=__cordl_internal_set__lastWordLen_5__5)) int32_t  _lastWordLen_5__5;

/// @brief Field <nGram>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__nGram_5__2, put=__cordl_internal_set__nGram_5__2)) ::System::Text::StringBuilder*  _nGram_5__2;

/// @brief Field <wordCount>5__4, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__wordCount_5__4, put=__cordl_internal_set__wordCount_5__4)) int32_t  _wordCount_5__4;

/// @brief Field <wordLengths>5__3, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__wordLengths_5__3, put=__cordl_internal_set__wordLengths_5__3)) ::System::Collections::Generic::Queue_1<int32_t>*  _wordLengths_5__3;

/// @brief Field nGramSize, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_nGramSize, put=__cordl_internal_set_nGramSize)) uint8_t  nGramSize;

/// @brief Field text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::StringW  text;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x16bdcec, size 0x40c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::NGramGenerator__MakeNgrams_d__11* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x16be140, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x16be0f8, size 0x8, virtual true, abstract: false, final true
inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x16be1e4, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16be100, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16be138, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16bdce8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::StringW const& __cordl_internal_get___2__current() const;

constexpr ::StringW& __cordl_internal_get___2__current() ;

constexpr uint8_t const& __cordl_internal_get___3__nGramSize() const;

constexpr uint8_t& __cordl_internal_get___3__nGramSize() ;

constexpr ::StringW const& __cordl_internal_get___3__text() const;

constexpr ::StringW& __cordl_internal_get___3__text() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__i_5__6() const;

constexpr int32_t& __cordl_internal_get__i_5__6() ;

constexpr int32_t const& __cordl_internal_get__lastWordLen_5__5() const;

constexpr int32_t& __cordl_internal_get__lastWordLen_5__5() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__nGram_5__2() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__nGram_5__2() ;

constexpr int32_t const& __cordl_internal_get__wordCount_5__4() const;

constexpr int32_t& __cordl_internal_get__wordCount_5__4() ;

constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get__wordLengths_5__3() const;

constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get__wordLengths_5__3() ;

constexpr uint8_t const& __cordl_internal_get_nGramSize() const;

constexpr uint8_t& __cordl_internal_get_nGramSize() ;

constexpr ::StringW const& __cordl_internal_get_text() const;

constexpr ::StringW& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::StringW  value) ;

constexpr void __cordl_internal_set___3__nGramSize(uint8_t  value) ;

constexpr void __cordl_internal_set___3__text(::StringW  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__6(int32_t  value) ;

constexpr void __cordl_internal_set__lastWordLen_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__nGram_5__2(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__wordCount_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__wordLengths_5__3(::System::Collections::Generic::Queue_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_nGramSize(uint8_t  value) ;

constexpr void __cordl_internal_set_text(::StringW  value) ;

/// @brief Method .ctor, addr 0x16bd940, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NGramGenerator__MakeNgrams_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NGramGenerator__MakeNgrams_d__11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NGramGenerator__MakeNgrams_d__11(NGramGenerator__MakeNgrams_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NGramGenerator__MakeNgrams_d__11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NGramGenerator__MakeNgrams_d__11(NGramGenerator__MakeNgrams_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::StringW  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___text;

/// @brief Field <>3__text, offset: 0x30, size: 0x8, def value: None
 ::StringW  _____3__text;

/// @brief Field nGramSize, offset: 0x38, size: 0x1, def value: None
 uint8_t  ___nGramSize;

/// @brief Field <>3__nGramSize, offset: 0x39, size: 0x1, def value: None
 uint8_t  _____3__nGramSize;

/// @brief Field <nGram>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____nGram_5__2;

/// @brief Field <wordLengths>5__3, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<int32_t>*  ____wordLengths_5__3;

/// @brief Field <wordCount>5__4, offset: 0x50, size: 0x4, def value: None
 int32_t  ____wordCount_5__4;

/// @brief Field <lastWordLen>5__5, offset: 0x54, size: 0x4, def value: None
 int32_t  ____lastWordLen_5__5;

/// @brief Field <i>5__6, offset: 0x58, size: 0x4, def value: None
 int32_t  ____i_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, ___text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, _____3__text) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, ___nGramSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, _____3__nGramSize) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, ____nGram_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, ____wordLengths_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, ____wordCount_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, ____lastWordLen_5__5) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, ____i_5__6) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NGramGenerator__MakeNgrams_d__11, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NGramGenerator
class CORDL_TYPE NGramGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _MakeNgrams_d__11 = ::GlobalNamespace::NGramGenerator__MakeNgrams_d__11;

using __c = ::GlobalNamespace::NGramGenerator___c;

/// @brief Field ButtonLabels, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ButtonLabels, put=__cordl_internal_set_ButtonLabels)) ::ArrayW<::UnityW<::UnityEngine::UI::Text>,::Array<::UnityW<::UnityEngine::UI::Text>>*>  ButtonLabels;

/// @brief Field LevenshteinCorpus, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_LevenshteinCorpus, put=__cordl_internal_set_LevenshteinCorpus)) ::System::Collections::Generic::List_1<::StringW>*  LevenshteinCorpus;

/// @brief Field biGramDict, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_biGramDict, put=__cordl_internal_set_biGramDict)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  biGramDict;

/// @brief Field biGramPredictionCorpus, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_biGramPredictionCorpus, put=__cordl_internal_set_biGramPredictionCorpus)) ::System::Collections::Generic::List_1<::StringW>*  biGramPredictionCorpus;

/// @brief Field levenshteinDict, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_levenshteinDict, put=__cordl_internal_set_levenshteinDict)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  levenshteinDict;

/// @brief Method Awake, addr 0x16bc668, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GenerateBiGrams, addr 0x16bcc4c, size 0x3f8, virtual false, abstract: false, final false
inline void GenerateBiGrams(::StringW  corpus) ;

/// @brief Method GenerateLevenshteinDict, addr 0x16bd2ec, size 0x654, virtual false, abstract: false, final false
inline void GenerateLevenshteinDict(::StringW  corpus) ;

/// @brief Method GetDict, addr 0x16bca58, size 0x1f4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* GetDict(::StringW  s) ;

/// @brief Method GetLine, addr 0x16bd0c4, size 0x228, virtual false, abstract: false, final false
inline ::StringW GetLine(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  d) ;

/// @brief Method LoadDictionary, addr 0x16bc728, size 0x8c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* LoadDictionary(::StringW  filePath) ;

/// @brief Method MakeNgrams, addr 0x16bd044, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* MakeNgrams(::StringW  text, uint8_t  nGramSize) ;

static inline ::GlobalNamespace::NGramGenerator* New_ctor() ;

/// @brief Method OrderDictionary, addr 0x16bc7b4, size 0x2a4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* OrderDictionary(::StringW  filePath) ;

/// @brief Method PredictNextWords, addr 0x16bb5b4, size 0x444, virtual false, abstract: false, final false
inline void PredictNextWords(::StringW  input) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>,::Array<::UnityW<::UnityEngine::UI::Text>>*> const& __cordl_internal_get_ButtonLabels() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>,::Array<::UnityW<::UnityEngine::UI::Text>>*>& __cordl_internal_get_ButtonLabels() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_LevenshteinCorpus() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_LevenshteinCorpus() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_biGramDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_biGramDict() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_biGramPredictionCorpus() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_biGramPredictionCorpus() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_levenshteinDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_levenshteinDict() ;

constexpr void __cordl_internal_set_ButtonLabels(::ArrayW<::UnityW<::UnityEngine::UI::Text>,::Array<::UnityW<::UnityEngine::UI::Text>>*>  value) ;

constexpr void __cordl_internal_set_LevenshteinCorpus(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_biGramDict(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_biGramPredictionCorpus(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_levenshteinDict(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x16bd974, size 0xf4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NGramGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NGramGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NGramGenerator(NGramGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NGramGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NGramGenerator(NGramGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24};

/// @brief Field ButtonLabels, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Text>,::Array<::UnityW<::UnityEngine::UI::Text>>*>  ___ButtonLabels;

/// @brief Field LevenshteinCorpus, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___LevenshteinCorpus;

/// @brief Field biGramDict, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___biGramDict;

/// @brief Field levenshteinDict, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___levenshteinDict;

/// @brief Field biGramPredictionCorpus, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___biGramPredictionCorpus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NGramGenerator, ___ButtonLabels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator, ___LevenshteinCorpus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator, ___biGramDict) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator, ___levenshteinDict) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NGramGenerator, ___biGramPredictionCorpus) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NGramGenerator, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NGramGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NGramGenerator*, "", "NGramGenerator");
NEED_NO_BOX(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NGramGenerator__MakeNgrams_d__11*, "", "NGramGenerator/<MakeNgrams>d__11");
NEED_NO_BOX(::GlobalNamespace::NGramGenerator___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NGramGenerator___c*, "", "NGramGenerator/<>c");
