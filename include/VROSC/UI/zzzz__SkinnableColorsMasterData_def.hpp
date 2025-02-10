#pragma once
// IWYU pragma private; include "VROSC/UI/SkinnableColorsMasterData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SkinnableColorsMasterData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC::UI {
class SkinnableColorsMasterData_Category;
}
namespace VROSC::UI {
class UIColorGetter;
}
// Forward declare root types
namespace VROSC::UI {
class SkinnableColorsMasterData;
}
namespace VROSC::UI {
class SkinnableColorsMasterData_Category;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::SkinnableColorsMasterData);
MARK_REF_PTR_T(::VROSC::UI::SkinnableColorsMasterData_Category);
// Dependencies System.Object
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.SkinnableColorsMasterData/Category
class CORDL_TYPE SkinnableColorsMasterData_Category : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_MappedColors)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>*  MappedColors;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field _mappedColors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__mappedColors, put=__cordl_internal_set__mappedColors)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>*  _mappedColors;

/// @brief Field _name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

static inline ::VROSC::UI::SkinnableColorsMasterData_Category* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>* const& __cordl_internal_get__mappedColors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>*& __cordl_internal_get__mappedColors() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set__mappedColors(::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>*  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// @brief Method .ctor, addr 0x17e77ec, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MappedColors, addr 0x17e77dc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>* get_MappedColors() ;

/// @brief Method get_Name, addr 0x17e77e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkinnableColorsMasterData_Category() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkinnableColorsMasterData_Category", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkinnableColorsMasterData_Category(SkinnableColorsMasterData_Category && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkinnableColorsMasterData_Category", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkinnableColorsMasterData_Category(SkinnableColorsMasterData_Category const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1617};

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _mappedColors, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIColorGetter>>*  ____mappedColors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::SkinnableColorsMasterData_Category, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::SkinnableColorsMasterData_Category, ____mappedColors) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::SkinnableColorsMasterData_Category, 0x20>, "Size mismatch!");

} // namespace end def VROSC::UI
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.SkinnableColorsMasterData
class CORDL_TYPE SkinnableColorsMasterData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Category = ::VROSC::UI::SkinnableColorsMasterData_Category;

 __declspec(property(get=get_Categories)) ::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>*  Categories;

/// @brief Field _categories, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__categories, put=__cordl_internal_set__categories)) ::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>*  _categories;

static inline ::VROSC::UI::SkinnableColorsMasterData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>* const& __cordl_internal_get__categories() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>*& __cordl_internal_get__categories() ;

constexpr void __cordl_internal_set__categories(::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>*  value) ;

/// @brief Method .ctor, addr 0x17e7760, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Categories, addr 0x17e7758, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>* get_Categories() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkinnableColorsMasterData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkinnableColorsMasterData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkinnableColorsMasterData(SkinnableColorsMasterData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkinnableColorsMasterData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkinnableColorsMasterData(SkinnableColorsMasterData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1618};

/// @brief Field _categories, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::UI::SkinnableColorsMasterData_Category*>*  ____categories;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::SkinnableColorsMasterData, ____categories) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::SkinnableColorsMasterData, 0x20>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::SkinnableColorsMasterData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::SkinnableColorsMasterData*, "VROSC.UI", "SkinnableColorsMasterData");
NEED_NO_BOX(::VROSC::UI::SkinnableColorsMasterData_Category);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::SkinnableColorsMasterData_Category*, "VROSC.UI", "SkinnableColorsMasterData/Category");
