#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsSectionData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CreditsSectionData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC::Credits {
class CreditsNameListData;
}
namespace VROSC::Credits {
class CreditsObject;
}
// Forward declare root types
namespace VROSC::Credits {
class CreditsSectionData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Credits::CreditsSectionData);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::Credits {
// Is value type: false
// CS Name: VROSC.Credits.CreditsSectionData
class CORDL_TYPE CreditsSectionData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_FooterObject)) ::UnityW<::VROSC::Credits::CreditsObject>  FooterObject;

 __declspec(property(get=get_HeaderObject)) ::UnityW<::VROSC::Credits::CreditsObject>  HeaderObject;

 __declspec(property(get=get_NameLists)) ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>*  NameLists;

 __declspec(property(get=get_PaddingFromHeaderToSections)) float_t  PaddingFromHeaderToSections;

 __declspec(property(get=get_SectionHeader)) ::StringW  SectionHeader;

/// @brief Field _footerObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__footerObject, put=__cordl_internal_set__footerObject)) ::UnityW<::VROSC::Credits::CreditsObject>  _footerObject;

/// @brief Field _headerObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__headerObject, put=__cordl_internal_set__headerObject)) ::UnityW<::VROSC::Credits::CreditsObject>  _headerObject;

/// @brief Field _nameLists, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__nameLists, put=__cordl_internal_set__nameLists)) ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>*  _nameLists;

/// @brief Field _paddingFromHeaderToSections, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__paddingFromHeaderToSections, put=__cordl_internal_set__paddingFromHeaderToSections)) float_t  _paddingFromHeaderToSections;

/// @brief Field _sectionHeader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sectionHeader, put=__cordl_internal_set__sectionHeader)) ::StringW  _sectionHeader;

static inline ::VROSC::Credits::CreditsSectionData* New_ctor() ;

constexpr ::UnityW<::VROSC::Credits::CreditsObject> const& __cordl_internal_get__footerObject() const;

constexpr ::UnityW<::VROSC::Credits::CreditsObject>& __cordl_internal_get__footerObject() ;

constexpr ::UnityW<::VROSC::Credits::CreditsObject> const& __cordl_internal_get__headerObject() const;

constexpr ::UnityW<::VROSC::Credits::CreditsObject>& __cordl_internal_get__headerObject() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>* const& __cordl_internal_get__nameLists() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>*& __cordl_internal_get__nameLists() ;

constexpr float_t const& __cordl_internal_get__paddingFromHeaderToSections() const;

constexpr float_t& __cordl_internal_get__paddingFromHeaderToSections() ;

constexpr ::StringW const& __cordl_internal_get__sectionHeader() const;

constexpr ::StringW& __cordl_internal_get__sectionHeader() ;

constexpr void __cordl_internal_set__footerObject(::UnityW<::VROSC::Credits::CreditsObject>  value) ;

constexpr void __cordl_internal_set__headerObject(::UnityW<::VROSC::Credits::CreditsObject>  value) ;

constexpr void __cordl_internal_set__nameLists(::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>*  value) ;

constexpr void __cordl_internal_set__paddingFromHeaderToSections(float_t  value) ;

constexpr void __cordl_internal_set__sectionHeader(::StringW  value) ;

/// @brief Method .ctor, addr 0x17dd3e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FooterObject, addr 0x17dd3d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Credits::CreditsObject> get_FooterObject() ;

/// @brief Method get_HeaderObject, addr 0x17dd3bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Credits::CreditsObject> get_HeaderObject() ;

/// @brief Method get_NameLists, addr 0x17dd3dc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>* get_NameLists() ;

/// @brief Method get_PaddingFromHeaderToSections, addr 0x17dd3cc, size 0x8, virtual false, abstract: false, final false
inline float_t get_PaddingFromHeaderToSections() ;

/// @brief Method get_SectionHeader, addr 0x17dd3c4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SectionHeader() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsSectionData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsSectionData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsSectionData(CreditsSectionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsSectionData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsSectionData(CreditsSectionData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1584};

/// @brief Field _headerObject, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::Credits::CreditsObject>  ____headerObject;

/// @brief Field _sectionHeader, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____sectionHeader;

/// @brief Field _paddingFromHeaderToSections, offset: 0x28, size: 0x4, def value: None
 float_t  ____paddingFromHeaderToSections;

/// @brief Field _footerObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::Credits::CreditsObject>  ____footerObject;

/// @brief Field _nameLists, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>*  ____nameLists;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Credits::CreditsSectionData, ____headerObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsSectionData, ____sectionHeader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsSectionData, ____paddingFromHeaderToSections) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsSectionData, ____footerObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsSectionData, ____nameLists) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Credits::CreditsSectionData, 0x40>, "Size mismatch!");

} // namespace end def VROSC::Credits
NEED_NO_BOX(::VROSC::Credits::CreditsSectionData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsSectionData*, "VROSC.Credits", "CreditsSectionData");
