#pragma once
// IWYU pragma private; include "VROSC/NoteField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteField)
namespace VROSC {
class NoteNode;
}
// Forward declare root types
namespace VROSC {
class NoteField;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteField);
// Dependencies System.Object, VROSC.Note
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteField
class CORDL_TYPE NoteField : public ::System::Object {
public:
// Declarations
/// @brief Field ConnectedValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectedValue, put=__cordl_internal_set_ConnectedValue)) ::UnityW<::VROSC::NoteNode>  ConnectedValue;

/// @brief Field EnteredValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_EnteredValue, put=__cordl_internal_set_EnteredValue)) ::VROSC::Note  EnteredValue;

 __declspec(property(get=get_Value)) int32_t  Value;

static inline ::VROSC::NoteField* New_ctor() ;

constexpr ::UnityW<::VROSC::NoteNode> const& __cordl_internal_get_ConnectedValue() const;

constexpr ::UnityW<::VROSC::NoteNode>& __cordl_internal_get_ConnectedValue() ;

constexpr ::VROSC::Note const& __cordl_internal_get_EnteredValue() const;

constexpr ::VROSC::Note& __cordl_internal_get_EnteredValue() ;

constexpr void __cordl_internal_set_ConnectedValue(::UnityW<::VROSC::NoteNode>  value) ;

constexpr void __cordl_internal_set_EnteredValue(::VROSC::Note  value) ;

/// @brief Method .ctor, addr 0x171ad34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Value, addr 0x171acb0, size 0x84, virtual false, abstract: false, final false
inline int32_t get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteField(NoteField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteField(NoteField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{935};

/// @brief Field EnteredValue, offset: 0x10, size: 0x4, def value: None
 ::VROSC::Note  ___EnteredValue;

/// @brief Field ConnectedValue, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteNode>  ___ConnectedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteField, ___EnteredValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteField, ___ConnectedValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteField, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteField);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteField*, "VROSC", "NoteField");
