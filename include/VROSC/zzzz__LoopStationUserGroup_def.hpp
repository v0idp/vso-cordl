#pragma once
// IWYU pragma private; include "VROSC/LoopStationUserGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopStationGroup_def.hpp"
CORDL_MODULE_EXPORT(LoopStationUserGroup)
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
class MoveOnPlane;
}
namespace VROSC {
class UIHoldButton;
}
// Forward declare root types
namespace VROSC {
class LoopStationUserGroup;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationUserGroup);
// Dependencies VROSC.LoopStationGroup
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationUserGroup
class CORDL_TYPE LoopStationUserGroup : public ::VROSC::LoopStationGroup {
public:
// Declarations
/// @brief Field _mover, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__mover, put=__cordl_internal_set__mover)) ::UnityW<::VROSC::MoveOnPlane>  _mover;

/// @brief Field _removeButton, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__removeButton, put=__cordl_internal_set__removeButton)) ::UnityW<::VROSC::UIHoldButton>  _removeButton;

/// @brief Method Awake, addr 0x18b9524, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::LoopStationUserGroup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18b9850, size 0xcc, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGrabEnd, addr 0x18b97e4, size 0x6c, virtual false, abstract: false, final false
inline void OnGrabEnd() ;

/// @brief Method RemovePressed, addr 0x18b991c, size 0x24, virtual false, abstract: false, final false
inline void RemovePressed() ;

/// @brief Method SetAutoSorted, addr 0x18b9940, size 0x68, virtual true, abstract: false, final false
inline void SetAutoSorted(bool  autoSorted) ;

/// @brief Method Setup, addr 0x18b9644, size 0x1a0, virtual true, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopStationGroupHandler*  handler, ::VROSC::LoopStationGroup_SetupVariables  vars) ;

constexpr ::UnityW<::VROSC::MoveOnPlane> const& __cordl_internal_get__mover() const;

constexpr ::UnityW<::VROSC::MoveOnPlane>& __cordl_internal_get__mover() ;

constexpr ::UnityW<::VROSC::UIHoldButton> const& __cordl_internal_get__removeButton() const;

constexpr ::UnityW<::VROSC::UIHoldButton>& __cordl_internal_get__removeButton() ;

constexpr void __cordl_internal_set__mover(::UnityW<::VROSC::MoveOnPlane>  value) ;

constexpr void __cordl_internal_set__removeButton(::UnityW<::VROSC::UIHoldButton>  value) ;

/// @brief Method .ctor, addr 0x18b99a8, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationUserGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationUserGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationUserGroup(LoopStationUserGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationUserGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationUserGroup(LoopStationUserGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{732};

/// @brief Field _removeButton, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHoldButton>  ____removeButton;

/// @brief Field _mover, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::VROSC::MoveOnPlane>  ____mover;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationUserGroup, ____removeButton) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationUserGroup, ____mover) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationUserGroup, 0xd0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationUserGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationUserGroup*, "VROSC", "LoopStationUserGroup");
