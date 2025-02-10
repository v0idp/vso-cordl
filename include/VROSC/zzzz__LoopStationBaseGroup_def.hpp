#pragma once
// IWYU pragma private; include "VROSC/LoopStationBaseGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopStationGroup_def.hpp"
CORDL_MODULE_EXPORT(LoopStationBaseGroup)
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationGroupHandler;
}
namespace VROSC {
struct LoopStationGroup_SetupVariables;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class TransformMoverRelay;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class LoopStationBaseGroup;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationBaseGroup);
// Dependencies VROSC.LoopStationGroup
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationBaseGroup
class CORDL_TYPE LoopStationBaseGroup : public ::VROSC::LoopStationGroup {
public:
// Declarations
/// @brief Field _convertButton, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__convertButton, put=__cordl_internal_set__convertButton)) ::UnityW<::VROSC::UIButton>  _convertButton;

/// @brief Field _isTheUngroupedGroup, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTheUngroupedGroup, put=__cordl_internal_set__isTheUngroupedGroup)) bool  _isTheUngroupedGroup;

/// @brief Field _moverRelay, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__moverRelay, put=__cordl_internal_set__moverRelay)) ::UnityW<::VROSC::TransformMoverRelay>  _moverRelay;

/// @brief Field _objectsToDisable, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectsToDisable, put=__cordl_internal_set__objectsToDisable)) ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>  _objectsToDisable;

/// @brief Method Awake, addr 0x18b4c6c, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ConvertToUserGroupButtonPressed, addr 0x18b50ec, size 0x170, virtual false, abstract: false, final false
inline void ConvertToUserGroupButtonPressed() ;

static inline ::VROSC::LoopStationBaseGroup* New_ctor() ;

/// @brief Method RemoveLoop, addr 0x18b52cc, size 0x6c, virtual true, abstract: false, final false
inline void RemoveLoop(::VROSC::LoopPlayer*  loopPlayer, bool  byGrab, bool  fromReset) ;

/// @brief Method SetAsTheUngroupedGroup, addr 0x18b0ad8, size 0x6c, virtual false, abstract: false, final false
inline void SetAsTheUngroupedGroup() ;

/// @brief Method Setup, addr 0x18b4d8c, size 0x54, virtual true, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopStationGroupHandler*  handler, ::VROSC::LoopStationGroup_SetupVariables  vars) ;

/// @brief Method UpdateGroupVisibility, addr 0x18b5464, size 0x8c, virtual true, abstract: false, final false
inline void UpdateGroupVisibility(bool  byGrab) ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__convertButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__convertButton() ;

constexpr bool const& __cordl_internal_get__isTheUngroupedGroup() const;

constexpr bool& __cordl_internal_get__isTheUngroupedGroup() ;

constexpr ::UnityW<::VROSC::TransformMoverRelay> const& __cordl_internal_get__moverRelay() const;

constexpr ::UnityW<::VROSC::TransformMoverRelay>& __cordl_internal_get__moverRelay() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__objectsToDisable() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__objectsToDisable() ;

constexpr void __cordl_internal_set__convertButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__isTheUngroupedGroup(bool  value) ;

constexpr void __cordl_internal_set__moverRelay(::UnityW<::VROSC::TransformMoverRelay>  value) ;

constexpr void __cordl_internal_set__objectsToDisable(::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>  value) ;

/// @brief Method .ctor, addr 0x18b552c, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationBaseGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationBaseGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationBaseGroup(LoopStationBaseGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationBaseGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationBaseGroup(LoopStationBaseGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{725};

/// @brief Field _moverRelay, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMoverRelay>  ____moverRelay;

/// @brief Field _convertButton, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____convertButton;

/// @brief Field _objectsToDisable, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>  ____objectsToDisable;

/// @brief Field _isTheUngroupedGroup, offset: 0xd8, size: 0x1, def value: None
 bool  ____isTheUngroupedGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationBaseGroup, ____moverRelay) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationBaseGroup, ____convertButton) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationBaseGroup, ____objectsToDisable) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationBaseGroup, ____isTheUngroupedGroup) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationBaseGroup, 0xe0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationBaseGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationBaseGroup*, "VROSC", "LoopStationBaseGroup");
