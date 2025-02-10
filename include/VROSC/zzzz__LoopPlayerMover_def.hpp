#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerMover.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopPlayerMover)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class LoopDropzone;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class MoveOnPlane;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerMover;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerMover);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerMover
class CORDL_TYPE LoopPlayerMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsGrabbed, put=set_IsGrabbed)) bool  IsGrabbed;

/// @brief Field <IsGrabbed>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsGrabbed_k__BackingField, put=__cordl_internal_set__IsGrabbed_k__BackingField)) bool  _IsGrabbed_k__BackingField;

/// @brief Field _belongsToGroup, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__belongsToGroup, put=__cordl_internal_set__belongsToGroup)) ::UnityW<::VROSC::LoopStationGroup>  _belongsToGroup;

/// @brief Field _checkvolume, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__checkvolume, put=__cordl_internal_set__checkvolume)) ::UnityW<::UnityEngine::Collider>  _checkvolume;

/// @brief Field _currentlyHovering, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentlyHovering, put=__cordl_internal_set__currentlyHovering)) ::UnityW<::VROSC::LoopDropzone>  _currentlyHovering;

/// @brief Field _deleteZoneLocator, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__deleteZoneLocator, put=__cordl_internal_set__deleteZoneLocator)) ::UnityW<::UnityEngine::Transform>  _deleteZoneLocator;

/// @brief Field _duplicateZoneLocator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__duplicateZoneLocator, put=__cordl_internal_set__duplicateZoneLocator)) ::UnityW<::UnityEngine::Transform>  _duplicateZoneLocator;

/// @brief Field _loopPlayer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayer, put=__cordl_internal_set__loopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _loopPlayer;

/// @brief Field _loopStation, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _mover, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mover, put=__cordl_internal_set__mover)) ::UnityW<::VROSC::MoveOnPlane>  _mover;

/// @brief Field _onlyAllowDropOnOwnGroupOrUserGroups, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__onlyAllowDropOnOwnGroupOrUserGroups, put=__cordl_internal_set__onlyAllowDropOnOwnGroupOrUserGroups)) bool  _onlyAllowDropOnOwnGroupOrUserGroups;

/// @brief Method GrabBegin, addr 0x18a5b14, size 0x130, virtual false, abstract: false, final false
inline void GrabBegin() ;

/// @brief Method GrabEnd, addr 0x18a5d74, size 0x18c, virtual false, abstract: false, final false
inline void GrabEnd() ;

static inline ::VROSC::LoopPlayerMover* New_ctor() ;

/// @brief Method SetGroup, addr 0x189ffb8, size 0x30, virtual false, abstract: false, final false
inline void SetGroup(::VROSC::LoopStationGroup*  loopStationGroup) ;

/// @brief Method Setup, addr 0x18a06dc, size 0x174, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopPlayer*  loopPlayer, ::VROSC::LoopStation*  loopStation) ;

/// @brief Method Update, addr 0x18a5c44, size 0x130, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__IsGrabbed_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsGrabbed_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get__belongsToGroup() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get__belongsToGroup() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__checkvolume() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__checkvolume() ;

constexpr ::UnityW<::VROSC::LoopDropzone> const& __cordl_internal_get__currentlyHovering() const;

constexpr ::UnityW<::VROSC::LoopDropzone>& __cordl_internal_get__currentlyHovering() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__deleteZoneLocator() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__deleteZoneLocator() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__duplicateZoneLocator() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__duplicateZoneLocator() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPlayer() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::VROSC::MoveOnPlane> const& __cordl_internal_get__mover() const;

constexpr ::UnityW<::VROSC::MoveOnPlane>& __cordl_internal_get__mover() ;

constexpr bool const& __cordl_internal_get__onlyAllowDropOnOwnGroupOrUserGroups() const;

constexpr bool& __cordl_internal_get__onlyAllowDropOnOwnGroupOrUserGroups() ;

constexpr void __cordl_internal_set__IsGrabbed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__belongsToGroup(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set__checkvolume(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__currentlyHovering(::UnityW<::VROSC::LoopDropzone>  value) ;

constexpr void __cordl_internal_set__deleteZoneLocator(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__duplicateZoneLocator(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__mover(::UnityW<::VROSC::MoveOnPlane>  value) ;

constexpr void __cordl_internal_set__onlyAllowDropOnOwnGroupOrUserGroups(bool  value) ;

/// @brief Method .ctor, addr 0x18a5f00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsGrabbed, addr 0x18a5b00, size 0x8, virtual false, abstract: false, final false
inline bool get_IsGrabbed() ;

/// @brief Method set_IsGrabbed, addr 0x18a5b08, size 0xc, virtual false, abstract: false, final false
inline void set_IsGrabbed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerMover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerMover(LoopPlayerMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerMover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerMover(LoopPlayerMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{686};

/// @brief Field <IsGrabbed>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsGrabbed_k__BackingField;

/// @brief Field _mover, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::MoveOnPlane>  ____mover;

/// @brief Field _checkvolume, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____checkvolume;

/// @brief Field _deleteZoneLocator, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____deleteZoneLocator;

/// @brief Field _duplicateZoneLocator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____duplicateZoneLocator;

/// @brief Field _loopStation, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _loopPlayer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPlayer;

/// @brief Field _belongsToGroup, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ____belongsToGroup;

/// @brief Field _currentlyHovering, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopDropzone>  ____currentlyHovering;

/// @brief Field _onlyAllowDropOnOwnGroupOrUserGroups, offset: 0x68, size: 0x1, def value: None
 bool  ____onlyAllowDropOnOwnGroupOrUserGroups;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerMover, ____IsGrabbed_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerMover, ____mover) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerMover, ____checkvolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerMover, ____deleteZoneLocator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerMover, ____duplicateZoneLocator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerMover, ____loopStation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerMover, ____loopPlayer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerMover, ____belongsToGroup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerMover, ____currentlyHovering) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerMover, ____onlyAllowDropOnOwnGroupOrUserGroups) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerMover, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerMover);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerMover*, "VROSC", "LoopPlayerMover");
