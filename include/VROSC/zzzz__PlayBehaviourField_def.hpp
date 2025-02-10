#pragma once
// IWYU pragma private; include "VROSC/PlayBehaviourField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__NoteBoardPlayer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayBehaviourField)
namespace VROSC {
class PlayBehaviourNode;
}
// Forward declare root types
namespace VROSC {
class PlayBehaviourField;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PlayBehaviourField);
// Dependencies System.Object, VROSC.NoteBoardPlayer::PlayBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PlayBehaviourField
class CORDL_TYPE PlayBehaviourField : public ::System::Object {
public:
// Declarations
/// @brief Field ConnectedValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectedValue, put=__cordl_internal_set_ConnectedValue)) ::UnityW<::VROSC::PlayBehaviourNode>  ConnectedValue;

/// @brief Field EnteredValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_EnteredValue, put=__cordl_internal_set_EnteredValue)) ::VROSC::NoteBoardPlayer_PlayBehaviour  EnteredValue;

 __declspec(property(get=get_Value)) int32_t  Value;

static inline ::VROSC::PlayBehaviourField* New_ctor() ;

constexpr ::UnityW<::VROSC::PlayBehaviourNode> const& __cordl_internal_get_ConnectedValue() const;

constexpr ::UnityW<::VROSC::PlayBehaviourNode>& __cordl_internal_get_ConnectedValue() ;

constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour const& __cordl_internal_get_EnteredValue() const;

constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour& __cordl_internal_get_EnteredValue() ;

constexpr void __cordl_internal_set_ConnectedValue(::UnityW<::VROSC::PlayBehaviourNode>  value) ;

constexpr void __cordl_internal_set_EnteredValue(::VROSC::NoteBoardPlayer_PlayBehaviour  value) ;

/// @brief Method .ctor, addr 0x171af2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Value, addr 0x171aea8, size 0x84, virtual false, abstract: false, final false
inline int32_t get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayBehaviourField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayBehaviourField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayBehaviourField(PlayBehaviourField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayBehaviourField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayBehaviourField(PlayBehaviourField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{938};

/// @brief Field EnteredValue, offset: 0x10, size: 0x4, def value: None
 ::VROSC::NoteBoardPlayer_PlayBehaviour  ___EnteredValue;

/// @brief Field ConnectedValue, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::PlayBehaviourNode>  ___ConnectedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlayBehaviourField, ___EnteredValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayBehaviourField, ___ConnectedValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlayBehaviourField, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PlayBehaviourField);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlayBehaviourField*, "VROSC", "PlayBehaviourField");
