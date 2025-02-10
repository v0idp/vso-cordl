#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CreditsData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC::Credits {
class CreditsObject;
}
namespace VROSC::Credits {
class CreditsSectionData;
}
// Forward declare root types
namespace VROSC::Credits {
class CreditsData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Credits::CreditsData);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::Credits {
// Is value type: false
// CS Name: VROSC.Credits.CreditsData
class CORDL_TYPE CreditsData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_GrabScrollInfluence)) float_t  GrabScrollInfluence;

 __declspec(property(get=get_GrabScrollSmoothing)) float_t  GrabScrollSmoothing;

 __declspec(property(get=get_NamePadding)) float_t  NamePadding;

 __declspec(property(get=get_PostCreditsObject)) ::UnityW<::VROSC::Credits::CreditsObject>  PostCreditsObject;

 __declspec(property(get=get_ScrollSpeed)) float_t  ScrollSpeed;

 __declspec(property(get=get_SecondsBeforeScroll)) float_t  SecondsBeforeScroll;

 __declspec(property(get=get_SectionPadding)) float_t  SectionPadding;

 __declspec(property(get=get_Sections)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsSectionData>>*  Sections;

 __declspec(property(get=get_StartOffset)) float_t  StartOffset;

/// @brief Field _grabScrollInfluence, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabScrollInfluence, put=__cordl_internal_set__grabScrollInfluence)) float_t  _grabScrollInfluence;

/// @brief Field _grabScrollSmoothing, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabScrollSmoothing, put=__cordl_internal_set__grabScrollSmoothing)) float_t  _grabScrollSmoothing;

/// @brief Field _namePadding, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__namePadding, put=__cordl_internal_set__namePadding)) float_t  _namePadding;

/// @brief Field _postCreditsObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__postCreditsObject, put=__cordl_internal_set__postCreditsObject)) ::UnityW<::VROSC::Credits::CreditsObject>  _postCreditsObject;

/// @brief Field _scrollSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__scrollSpeed, put=__cordl_internal_set__scrollSpeed)) float_t  _scrollSpeed;

/// @brief Field _secondsBeforeScroll, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__secondsBeforeScroll, put=__cordl_internal_set__secondsBeforeScroll)) float_t  _secondsBeforeScroll;

/// @brief Field _sectionPadding, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__sectionPadding, put=__cordl_internal_set__sectionPadding)) float_t  _sectionPadding;

/// @brief Field _sections, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__sections, put=__cordl_internal_set__sections)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsSectionData>>*  _sections;

/// @brief Field _startOffset, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__startOffset, put=__cordl_internal_set__startOffset)) float_t  _startOffset;

static inline ::VROSC::Credits::CreditsData* New_ctor() ;

constexpr float_t const& __cordl_internal_get__grabScrollInfluence() const;

constexpr float_t& __cordl_internal_get__grabScrollInfluence() ;

constexpr float_t const& __cordl_internal_get__grabScrollSmoothing() const;

constexpr float_t& __cordl_internal_get__grabScrollSmoothing() ;

constexpr float_t const& __cordl_internal_get__namePadding() const;

constexpr float_t& __cordl_internal_get__namePadding() ;

constexpr ::UnityW<::VROSC::Credits::CreditsObject> const& __cordl_internal_get__postCreditsObject() const;

constexpr ::UnityW<::VROSC::Credits::CreditsObject>& __cordl_internal_get__postCreditsObject() ;

constexpr float_t const& __cordl_internal_get__scrollSpeed() const;

constexpr float_t& __cordl_internal_get__scrollSpeed() ;

constexpr float_t const& __cordl_internal_get__secondsBeforeScroll() const;

constexpr float_t& __cordl_internal_get__secondsBeforeScroll() ;

constexpr float_t const& __cordl_internal_get__sectionPadding() const;

constexpr float_t& __cordl_internal_get__sectionPadding() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsSectionData>>* const& __cordl_internal_get__sections() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsSectionData>>*& __cordl_internal_get__sections() ;

constexpr float_t const& __cordl_internal_get__startOffset() const;

constexpr float_t& __cordl_internal_get__startOffset() ;

constexpr void __cordl_internal_set__grabScrollInfluence(float_t  value) ;

constexpr void __cordl_internal_set__grabScrollSmoothing(float_t  value) ;

constexpr void __cordl_internal_set__namePadding(float_t  value) ;

constexpr void __cordl_internal_set__postCreditsObject(::UnityW<::VROSC::Credits::CreditsObject>  value) ;

constexpr void __cordl_internal_set__scrollSpeed(float_t  value) ;

constexpr void __cordl_internal_set__secondsBeforeScroll(float_t  value) ;

constexpr void __cordl_internal_set__sectionPadding(float_t  value) ;

constexpr void __cordl_internal_set__sections(::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsSectionData>>*  value) ;

constexpr void __cordl_internal_set__startOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x17dd3b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GrabScrollInfluence, addr 0x17dd3a4, size 0x8, virtual false, abstract: false, final false
inline float_t get_GrabScrollInfluence() ;

/// @brief Method get_GrabScrollSmoothing, addr 0x17dd3ac, size 0x8, virtual false, abstract: false, final false
inline float_t get_GrabScrollSmoothing() ;

/// @brief Method get_NamePadding, addr 0x17dd374, size 0x8, virtual false, abstract: false, final false
inline float_t get_NamePadding() ;

/// @brief Method get_PostCreditsObject, addr 0x17dd384, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Credits::CreditsObject> get_PostCreditsObject() ;

/// @brief Method get_ScrollSpeed, addr 0x17dd38c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ScrollSpeed() ;

/// @brief Method get_SecondsBeforeScroll, addr 0x17dd394, size 0x8, virtual false, abstract: false, final false
inline float_t get_SecondsBeforeScroll() ;

/// @brief Method get_SectionPadding, addr 0x17dd37c, size 0x8, virtual false, abstract: false, final false
inline float_t get_SectionPadding() ;

/// @brief Method get_Sections, addr 0x17dd36c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsSectionData>>* get_Sections() ;

/// @brief Method get_StartOffset, addr 0x17dd39c, size 0x8, virtual false, abstract: false, final false
inline float_t get_StartOffset() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsData(CreditsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsData(CreditsData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1583};

/// @brief Field _sections, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsSectionData>>*  ____sections;

/// @brief Field _namePadding, offset: 0x20, size: 0x4, def value: None
 float_t  ____namePadding;

/// @brief Field _sectionPadding, offset: 0x24, size: 0x4, def value: None
 float_t  ____sectionPadding;

/// @brief Field _postCreditsObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::Credits::CreditsObject>  ____postCreditsObject;

/// @brief Field _scrollSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ____scrollSpeed;

/// @brief Field _secondsBeforeScroll, offset: 0x34, size: 0x4, def value: None
 float_t  ____secondsBeforeScroll;

/// @brief Field _startOffset, offset: 0x38, size: 0x4, def value: None
 float_t  ____startOffset;

/// @brief Field _grabScrollInfluence, offset: 0x3c, size: 0x4, def value: None
 float_t  ____grabScrollInfluence;

/// @brief Field _grabScrollSmoothing, offset: 0x40, size: 0x4, def value: None
 float_t  ____grabScrollSmoothing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Credits::CreditsData, ____sections) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsData, ____namePadding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsData, ____sectionPadding) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsData, ____postCreditsObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsData, ____scrollSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsData, ____secondsBeforeScroll) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsData, ____startOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsData, ____grabScrollInfluence) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsData, ____grabScrollSmoothing) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Credits::CreditsData, 0x48>, "Size mismatch!");

} // namespace end def VROSC::Credits
NEED_NO_BOX(::VROSC::Credits::CreditsData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsData*, "VROSC.Credits", "CreditsData");
