#pragma once
// IWYU pragma private; include "GlobalNamespace/Levenshtein.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Levenshtein)
namespace GlobalNamespace {
class Levenshtein_LevenshteinDistance;
}
namespace GlobalNamespace {
class Levenshtein___c;
}
namespace GlobalNamespace {
class NGramGenerator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class Levenshtein;
}
namespace GlobalNamespace {
class Levenshtein_LevenshteinDistance;
}
namespace GlobalNamespace {
class Levenshtein___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Levenshtein);
MARK_REF_PTR_T(::GlobalNamespace::Levenshtein_LevenshteinDistance);
MARK_REF_PTR_T(::GlobalNamespace::Levenshtein___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Levenshtein/LevenshteinDistance
class CORDL_TYPE Levenshtein_LevenshteinDistance : public ::System::Object {
public:
// Declarations
/// @brief Method Compute, addr 0x16bc218, size 0x2f8, virtual false, abstract: false, final false
static inline int32_t Compute(::StringW  s, ::StringW  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Levenshtein_LevenshteinDistance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Levenshtein_LevenshteinDistance", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Levenshtein_LevenshteinDistance(Levenshtein_LevenshteinDistance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Levenshtein_LevenshteinDistance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Levenshtein_LevenshteinDistance(Levenshtein_LevenshteinDistance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Levenshtein_LevenshteinDistance, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Levenshtein/<>c
class CORDL_TYPE Levenshtein___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::Levenshtein___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>*  __9__10_0;

/// @brief Field <>9__10_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_1, put=setStaticF___9__10_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>*  __9__10_1;

static inline ::GlobalNamespace::Levenshtein___c* New_ctor() ;

/// @brief Method <RunAutoComplete>b__10_0, addr 0x16bc5f0, size 0x3c, virtual false, abstract: false, final false
inline int32_t _RunAutoComplete_b__10_0(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  kp) ;

/// @brief Method <RunAutoComplete>b__10_1, addr 0x16bc62c, size 0x3c, virtual false, abstract: false, final false
inline int32_t _RunAutoComplete_b__10_1(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>  kp) ;

/// @brief Method .ctor, addr 0x16bc5e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::Levenshtein___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>* getStaticF___9__10_0() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>* getStaticF___9__10_1() ;

static inline void setStaticF___9(::GlobalNamespace::Levenshtein___c*  value) ;

static inline void setStaticF___9__10_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>*  value) ;

static inline void setStaticF___9__10_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Levenshtein___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Levenshtein___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Levenshtein___c(Levenshtein___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Levenshtein___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Levenshtein___c(Levenshtein___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Levenshtein___c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Levenshtein
class CORDL_TYPE Levenshtein : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LevenshteinDistance = ::GlobalNamespace::Levenshtein_LevenshteinDistance;

using __c = ::GlobalNamespace::Levenshtein___c;

/// @brief Field ButtonLabels, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ButtonLabels, put=__cordl_internal_set_ButtonLabels)) ::ArrayW<::UnityW<::UnityEngine::UI::Text>,::Array<::UnityW<::UnityEngine::UI::Text>>*>  ButtonLabels;

/// @brief Field NGramHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_NGramHandler, put=__cordl_internal_set_NGramHandler)) ::UnityW<::GlobalNamespace::NGramGenerator>  NGramHandler;

/// @brief Field corpus, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_corpus, put=__cordl_internal_set_corpus)) ::System::Collections::Generic::List_1<::StringW>*  corpus;

/// @brief Field isFirstLetterUpper, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFirstLetterUpper, put=__cordl_internal_set_isFirstLetterUpper)) bool  isFirstLetterUpper;

/// @brief Field isUppercase, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isUppercase, put=__cordl_internal_set_isUppercase)) bool  isUppercase;

static inline ::GlobalNamespace::Levenshtein* New_ctor() ;

/// @brief Method RunAutoComplete, addr 0x16bbb30, size 0x6e8, virtual false, abstract: false, final false
inline void RunAutoComplete(::StringW  input) ;

/// @brief Method Start, addr 0x16bba6c, size 0xc4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>,::Array<::UnityW<::UnityEngine::UI::Text>>*> const& __cordl_internal_get_ButtonLabels() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>,::Array<::UnityW<::UnityEngine::UI::Text>>*>& __cordl_internal_get_ButtonLabels() ;

constexpr ::UnityW<::GlobalNamespace::NGramGenerator> const& __cordl_internal_get_NGramHandler() const;

constexpr ::UnityW<::GlobalNamespace::NGramGenerator>& __cordl_internal_get_NGramHandler() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_corpus() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_corpus() ;

constexpr bool const& __cordl_internal_get_isFirstLetterUpper() const;

constexpr bool& __cordl_internal_get_isFirstLetterUpper() ;

constexpr bool const& __cordl_internal_get_isUppercase() const;

constexpr bool& __cordl_internal_get_isUppercase() ;

constexpr void __cordl_internal_set_ButtonLabels(::ArrayW<::UnityW<::UnityEngine::UI::Text>,::Array<::UnityW<::UnityEngine::UI::Text>>*>  value) ;

constexpr void __cordl_internal_set_NGramHandler(::UnityW<::GlobalNamespace::NGramGenerator>  value) ;

constexpr void __cordl_internal_set_corpus(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_isFirstLetterUpper(bool  value) ;

constexpr void __cordl_internal_set_isUppercase(bool  value) ;

/// @brief Method .ctor, addr 0x16bc510, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Levenshtein() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Levenshtein", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Levenshtein(Levenshtein && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Levenshtein", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Levenshtein(Levenshtein const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21};

/// @brief Field maxLevenshteinCost offset 0xffffffff size 0x4
static constexpr int32_t  maxLevenshteinCost{static_cast<int32_t>(0x7)};

/// @brief Field maxWordLength offset 0xffffffff size 0x4
static constexpr int32_t  maxWordLength{static_cast<int32_t>(0xf)};

/// @brief Field minLevenshteinCost offset 0xffffffff size 0x4
static constexpr int32_t  minLevenshteinCost{static_cast<int32_t>(0x1)};

/// @brief Field NGramHandler, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NGramGenerator>  ___NGramHandler;

/// @brief Field ButtonLabels, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Text>,::Array<::UnityW<::UnityEngine::UI::Text>>*>  ___ButtonLabels;

/// @brief Field corpus, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___corpus;

/// @brief Field isUppercase, offset: 0x38, size: 0x1, def value: None
 bool  ___isUppercase;

/// @brief Field isFirstLetterUpper, offset: 0x39, size: 0x1, def value: None
 bool  ___isFirstLetterUpper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Levenshtein, ___NGramHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Levenshtein, ___ButtonLabels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Levenshtein, ___corpus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Levenshtein, ___isUppercase) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Levenshtein, ___isFirstLetterUpper) == 0x39, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Levenshtein, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Levenshtein);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Levenshtein*, "", "Levenshtein");
NEED_NO_BOX(::GlobalNamespace::Levenshtein_LevenshteinDistance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Levenshtein_LevenshteinDistance*, "", "Levenshtein/LevenshteinDistance");
NEED_NO_BOX(::GlobalNamespace::Levenshtein___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Levenshtein___c*, "", "Levenshtein/<>c");
