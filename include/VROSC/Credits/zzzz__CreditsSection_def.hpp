#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsSection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/Credits/zzzz__CreditsObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CreditsSection)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC::Credits {
class CreditsData;
}
namespace VROSC::Credits {
class CreditsHeader;
}
namespace VROSC::Credits {
class CreditsLine;
}
namespace VROSC::Credits {
class CreditsNameListData;
}
namespace VROSC::Credits {
class CreditsObject;
}
namespace VROSC::Credits {
class CreditsSectionData;
}
// Forward declare root types
namespace VROSC::Credits {
class CreditsSection;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Credits::CreditsSection);
// Dependencies VROSC.Credits.CreditsObject
namespace VROSC::Credits {
// Is value type: false
// CS Name: VROSC.Credits.CreditsSection
class CORDL_TYPE CreditsSection : public ::VROSC::Credits::CreditsObject {
public:
// Declarations
 __declspec(property(get=get_Objects)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>*  Objects;

/// @brief Field _creditsData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__creditsData, put=__cordl_internal_set__creditsData)) ::UnityW<::VROSC::Credits::CreditsData>  _creditsData;

/// @brief Field _headerPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__headerPrefab, put=__cordl_internal_set__headerPrefab)) ::UnityW<::VROSC::Credits::CreditsHeader>  _headerPrefab;

/// @brief Field _linePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__linePrefab, put=__cordl_internal_set__linePrefab)) ::UnityW<::VROSC::Credits::CreditsLine>  _linePrefab;

/// @brief Field _objects, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__objects, put=__cordl_internal_set__objects)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>*  _objects;

/// @brief Method CreateHeaderStyle, addr 0x17dcef0, size 0xd4, virtual false, abstract: false, final false
inline void CreateHeaderStyle(::StringW  headerText) ;

/// @brief Method CreateNameList, addr 0x17dcfc4, size 0x1f0, virtual false, abstract: false, final false
inline void CreateNameList(::VROSC::Credits::CreditsNameListData*  creditsNameList) ;

/// @brief Method CreateObject, addr 0x17dcdf4, size 0xfc, virtual false, abstract: false, final false
inline void CreateObject(::VROSC::Credits::CreditsObject*  prefab) ;

static inline ::VROSC::Credits::CreditsSection* New_ctor() ;

/// @brief Method PlaceAndAddObjectToList, addr 0x17dd1b4, size 0x13c, virtual false, abstract: false, final false
inline void PlaceAndAddObjectToList(::VROSC::Credits::CreditsObject*  creditsObject) ;

/// @brief Method Setup, addr 0x17dcbe8, size 0x20c, virtual false, abstract: false, final false
inline void Setup(::VROSC::Credits::CreditsData*  creditsData, ::VROSC::Credits::CreditsSectionData*  sectionData) ;

constexpr ::UnityW<::VROSC::Credits::CreditsData> const& __cordl_internal_get__creditsData() const;

constexpr ::UnityW<::VROSC::Credits::CreditsData>& __cordl_internal_get__creditsData() ;

constexpr ::UnityW<::VROSC::Credits::CreditsHeader> const& __cordl_internal_get__headerPrefab() const;

constexpr ::UnityW<::VROSC::Credits::CreditsHeader>& __cordl_internal_get__headerPrefab() ;

constexpr ::UnityW<::VROSC::Credits::CreditsLine> const& __cordl_internal_get__linePrefab() const;

constexpr ::UnityW<::VROSC::Credits::CreditsLine>& __cordl_internal_get__linePrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>* const& __cordl_internal_get__objects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>*& __cordl_internal_get__objects() ;

constexpr void __cordl_internal_set__creditsData(::UnityW<::VROSC::Credits::CreditsData>  value) ;

constexpr void __cordl_internal_set__headerPrefab(::UnityW<::VROSC::Credits::CreditsHeader>  value) ;

constexpr void __cordl_internal_set__linePrefab(::UnityW<::VROSC::Credits::CreditsLine>  value) ;

constexpr void __cordl_internal_set__objects(::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>*  value) ;

/// @brief Method .ctor, addr 0x17dd2f0, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Objects, addr 0x17dcbe0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>* get_Objects() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsSection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsSection(CreditsSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsSection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsSection(CreditsSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1582};

/// @brief Field _linePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::Credits::CreditsLine>  ____linePrefab;

/// @brief Field _headerPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::Credits::CreditsHeader>  ____headerPrefab;

/// @brief Field _creditsData, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::Credits::CreditsData>  ____creditsData;

/// @brief Field _objects, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::Credits::CreditsObject>>*  ____objects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Credits::CreditsSection, ____linePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsSection, ____headerPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsSection, ____creditsData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsSection, ____objects) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Credits::CreditsSection, 0x48>, "Size mismatch!");

} // namespace end def VROSC::Credits
NEED_NO_BOX(::VROSC::Credits::CreditsSection);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsSection*, "VROSC.Credits", "CreditsSection");
