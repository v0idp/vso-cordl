#pragma once
// IWYU pragma private; include "VROSC/SampleGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SampleGroup)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class SampleData;
}
// Forward declare root types
namespace VROSC {
class SampleGroup;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SampleGroup);
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SampleGroup
class CORDL_TYPE SampleGroup : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_DefaultNote)) int32_t  DefaultNote;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_Id)) int32_t  Id;

 __declspec(property(get=get_Samples)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::SampleData>>*  Samples;

/// @brief Field _color, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _defaultNote, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultNote, put=__cordl_internal_set__defaultNote)) int32_t  _defaultNote;

/// @brief Field _displayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName, put=__cordl_internal_set__displayName)) ::StringW  _displayName;

/// @brief Field _id, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) int32_t  _id;

/// @brief Field _samples, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__samples, put=__cordl_internal_set__samples)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::SampleData>>*  _samples;

static inline ::VROSC::SampleGroup* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr int32_t const& __cordl_internal_get__defaultNote() const;

constexpr int32_t& __cordl_internal_get__defaultNote() ;

constexpr ::StringW const& __cordl_internal_get__displayName() const;

constexpr ::StringW& __cordl_internal_get__displayName() ;

constexpr int32_t const& __cordl_internal_get__id() const;

constexpr int32_t& __cordl_internal_get__id() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::SampleData>>* const& __cordl_internal_get__samples() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::SampleData>>*& __cordl_internal_get__samples() ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__defaultNote(int32_t  value) ;

constexpr void __cordl_internal_set__displayName(::StringW  value) ;

constexpr void __cordl_internal_set__id(int32_t  value) ;

constexpr void __cordl_internal_set__samples(::System::Collections::Generic::List_1<::UnityW<::VROSC::SampleData>>*  value) ;

/// @brief Method .ctor, addr 0x16f73b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Color, addr 0x16f739c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_DefaultNote, addr 0x16f7394, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DefaultNote() ;

/// @brief Method get_DisplayName, addr 0x16f738c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_Id, addr 0x16f7384, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Id() ;

/// @brief Method get_Samples, addr 0x16f73a8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::SampleData>>* get_Samples() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleGroup(SampleGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleGroup(SampleGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{790};

/// @brief Field _id, offset: 0x18, size: 0x4, def value: None
 int32_t  ____id;

/// @brief Field _displayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____displayName;

/// @brief Field _defaultNote, offset: 0x28, size: 0x4, def value: None
 int32_t  ____defaultNote;

/// @brief Field _samples, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::SampleData>>*  ____samples;

/// @brief Field _color, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SampleGroup, ____id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SampleGroup, ____displayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SampleGroup, ____defaultNote) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SampleGroup, ____samples) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SampleGroup, ____color) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SampleGroup, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SampleGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SampleGroup*, "VROSC", "SampleGroup");
