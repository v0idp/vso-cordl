#pragma once
// IWYU pragma private; include "VROSC/LaunchpadSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__Grabable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LaunchpadSpawner)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class GrabData;
}
namespace VROSC {
class Launchpad;
}
namespace VROSC {
class TransformDataController;
}
// Forward declare root types
namespace VROSC {
class LaunchpadSpawner;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LaunchpadSpawner);
// Dependencies UnityEngine.Color, VROSC.Grabable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LaunchpadSpawner
class CORDL_TYPE LaunchpadSpawner : public ::VROSC::Grabable {
public:
// Declarations
 __declspec(property(get=get_CurrentColor, put=set_CurrentColor)) ::UnityEngine::Color  CurrentColor;

 __declspec(property(get=get_CurrentName, put=set_CurrentName)) ::StringW  CurrentName;

/// @brief Field OnLaunchPadCreated, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLaunchPadCreated, put=__cordl_internal_set_OnLaunchPadCreated)) ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  OnLaunchPadCreated;

/// @brief Field OnLaunchPadDeleted, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLaunchPadDeleted, put=__cordl_internal_set_OnLaunchPadDeleted)) ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  OnLaunchPadDeleted;

/// @brief Field OnLaunchPadHit, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLaunchPadHit, put=__cordl_internal_set_OnLaunchPadHit)) ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  OnLaunchPadHit;

/// @brief Field OnLaunchPadMoved, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLaunchPadMoved, put=__cordl_internal_set_OnLaunchPadMoved)) ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  OnLaunchPadMoved;

/// @brief Field OnTargetColorChanged, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTargetColorChanged, put=__cordl_internal_set_OnTargetColorChanged)) ::System::Action_1<::UnityEngine::Color>*  OnTargetColorChanged;

/// @brief Field OnTargetNameChanged, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTargetNameChanged, put=__cordl_internal_set_OnTargetNameChanged)) ::System::Action_1<::StringW>*  OnTargetNameChanged;

/// @brief Field <CurrentColor>k__BackingField, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get__CurrentColor_k__BackingField, put=__cordl_internal_set__CurrentColor_k__BackingField)) ::UnityEngine::Color  _CurrentColor_k__BackingField;

/// @brief Field <CurrentName>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentName_k__BackingField, put=__cordl_internal_set__CurrentName_k__BackingField)) ::StringW  _CurrentName_k__BackingField;

/// @brief Field _currentlyHeldLaunchpad, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentlyHeldLaunchpad, put=__cordl_internal_set__currentlyHeldLaunchpad)) ::UnityW<::VROSC::Launchpad>  _currentlyHeldLaunchpad;

/// @brief Field _launchPadParent, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__launchPadParent, put=__cordl_internal_set__launchPadParent)) ::UnityW<::UnityEngine::Transform>  _launchPadParent;

/// @brief Field _launchpadPrefab, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__launchpadPrefab, put=__cordl_internal_set__launchpadPrefab)) ::UnityW<::VROSC::Launchpad>  _launchpadPrefab;

/// @brief Field _spawnPoint, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnPoint, put=__cordl_internal_set__spawnPoint)) ::UnityW<::UnityEngine::Transform>  _spawnPoint;

/// @brief Field _spawnedLaunchPads, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnedLaunchPads, put=__cordl_internal_set__spawnedLaunchPads)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Launchpad>>*  _spawnedLaunchPads;

/// @brief Field _targetID, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetID, put=__cordl_internal_set__targetID)) ::StringW  _targetID;

/// @brief Method Grab, addr 0x17165b8, size 0x1f8, virtual true, abstract: false, final false
inline void Grab(::VROSC::GrabData*  grabData, bool  grabbing) ;

/// @brief Method LaunchPadDeleted, addr 0x1716b30, size 0x240, virtual false, abstract: false, final false
inline void LaunchPadDeleted(::VROSC::Launchpad*  launchpad) ;

/// @brief Method LaunchPadHit, addr 0x1716af8, size 0x1c, virtual false, abstract: false, final false
inline void LaunchPadHit(::VROSC::Launchpad*  launchpad) ;

/// @brief Method LaunchPadMoved, addr 0x1716b14, size 0x1c, virtual false, abstract: false, final false
inline void LaunchPadMoved(::VROSC::Launchpad*  launchpad) ;

/// @brief Method LoadLaunchPad, addr 0x1716d70, size 0xec, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Launchpad> LoadLaunchPad(::StringW  padID, ::VROSC::TransformDataController*  transformData) ;

static inline ::VROSC::LaunchpadSpawner* New_ctor() ;

/// @brief Method SetLaunchpadColor, addr 0x1716e5c, size 0x24, virtual false, abstract: false, final false
inline void SetLaunchpadColor(::UnityEngine::Color  color) ;

/// @brief Method SetLaunchpadDisplayName, addr 0x1716598, size 0x20, virtual false, abstract: false, final false
inline void SetLaunchpadDisplayName(::StringW  name) ;

/// @brief Method Setup, addr 0x1716570, size 0x28, virtual false, abstract: false, final false
inline void Setup(::StringW  targetID, ::UnityEngine::Transform*  launchPadParent, ::StringW  displayName) ;

/// @brief Method SpawnLaunchpad, addr 0x17167b0, size 0x348, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Launchpad> SpawnLaunchpad(::StringW  padID, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  localScale, bool  isNewLaunchpad) ;

/// @brief Method TearDown, addr 0x1716e80, size 0x3cc, virtual false, abstract: false, final false
inline void TearDown() ;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>* const& __cordl_internal_get_OnLaunchPadCreated() const;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>*& __cordl_internal_get_OnLaunchPadCreated() ;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>* const& __cordl_internal_get_OnLaunchPadDeleted() const;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>*& __cordl_internal_get_OnLaunchPadDeleted() ;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>* const& __cordl_internal_get_OnLaunchPadHit() const;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>*& __cordl_internal_get_OnLaunchPadHit() ;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>* const& __cordl_internal_get_OnLaunchPadMoved() const;

constexpr ::System::Action_1<::UnityW<::VROSC::Launchpad>>*& __cordl_internal_get_OnLaunchPadMoved() ;

constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_OnTargetColorChanged() const;

constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_OnTargetColorChanged() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnTargetNameChanged() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnTargetNameChanged() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__CurrentColor_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__CurrentColor_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__CurrentName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CurrentName_k__BackingField() ;

constexpr ::UnityW<::VROSC::Launchpad> const& __cordl_internal_get__currentlyHeldLaunchpad() const;

constexpr ::UnityW<::VROSC::Launchpad>& __cordl_internal_get__currentlyHeldLaunchpad() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__launchPadParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__launchPadParent() ;

constexpr ::UnityW<::VROSC::Launchpad> const& __cordl_internal_get__launchpadPrefab() const;

constexpr ::UnityW<::VROSC::Launchpad>& __cordl_internal_get__launchpadPrefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__spawnPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__spawnPoint() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Launchpad>>* const& __cordl_internal_get__spawnedLaunchPads() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Launchpad>>*& __cordl_internal_get__spawnedLaunchPads() ;

constexpr ::StringW const& __cordl_internal_get__targetID() const;

constexpr ::StringW& __cordl_internal_get__targetID() ;

constexpr void __cordl_internal_set_OnLaunchPadCreated(::System::Action_1<::UnityW<::VROSC::Launchpad>>*  value) ;

constexpr void __cordl_internal_set_OnLaunchPadDeleted(::System::Action_1<::UnityW<::VROSC::Launchpad>>*  value) ;

constexpr void __cordl_internal_set_OnLaunchPadHit(::System::Action_1<::UnityW<::VROSC::Launchpad>>*  value) ;

constexpr void __cordl_internal_set_OnLaunchPadMoved(::System::Action_1<::UnityW<::VROSC::Launchpad>>*  value) ;

constexpr void __cordl_internal_set_OnTargetColorChanged(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_OnTargetNameChanged(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__CurrentColor_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__CurrentName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__currentlyHeldLaunchpad(::UnityW<::VROSC::Launchpad>  value) ;

constexpr void __cordl_internal_set__launchPadParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__launchpadPrefab(::UnityW<::VROSC::Launchpad>  value) ;

constexpr void __cordl_internal_set__spawnPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__spawnedLaunchPads(::System::Collections::Generic::List_1<::UnityW<::VROSC::Launchpad>>*  value) ;

constexpr void __cordl_internal_set__targetID(::StringW  value) ;

/// @brief Method .ctor, addr 0x171724c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentColor, addr 0x1716564, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_CurrentColor() ;

/// @brief Method get_CurrentName, addr 0x1716550, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CurrentName() ;

/// @brief Method set_CurrentColor, addr 0x1716558, size 0xc, virtual false, abstract: false, final false
inline void set_CurrentColor(::UnityEngine::Color  value) ;

/// @brief Method set_CurrentName, addr 0x1716548, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LaunchpadSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LaunchpadSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LaunchpadSpawner(LaunchpadSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LaunchpadSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LaunchpadSpawner(LaunchpadSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{914};

/// @brief Field _launchpadPrefab, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::Launchpad>  ____launchpadPrefab;

/// @brief Field _spawnPoint, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____spawnPoint;

/// @brief Field _spawnedLaunchPads, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::Launchpad>>*  ____spawnedLaunchPads;

/// @brief Field OnLaunchPadCreated, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  ___OnLaunchPadCreated;

/// @brief Field OnLaunchPadMoved, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  ___OnLaunchPadMoved;

/// @brief Field OnLaunchPadDeleted, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  ___OnLaunchPadDeleted;

/// @brief Field OnLaunchPadHit, offset: 0xa8, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::Launchpad>>*  ___OnLaunchPadHit;

/// @brief Field OnTargetColorChanged, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color>*  ___OnTargetColorChanged;

/// @brief Field OnTargetNameChanged, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnTargetNameChanged;

/// @brief Field <CurrentName>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ____CurrentName_k__BackingField;

/// @brief Field <CurrentColor>k__BackingField, offset: 0xc8, size: 0x10, def value: None
 ::UnityEngine::Color  ____CurrentColor_k__BackingField;

/// @brief Field _targetID, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ____targetID;

/// @brief Field _launchPadParent, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____launchPadParent;

/// @brief Field _currentlyHeldLaunchpad, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::VROSC::Launchpad>  ____currentlyHeldLaunchpad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LaunchpadSpawner, ____launchpadPrefab) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ____spawnPoint) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ____spawnedLaunchPads) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ___OnLaunchPadCreated) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ___OnLaunchPadMoved) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ___OnLaunchPadDeleted) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ___OnLaunchPadHit) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ___OnTargetColorChanged) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ___OnTargetNameChanged) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ____CurrentName_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ____CurrentColor_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ____targetID) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ____launchPadParent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadSpawner, ____currentlyHeldLaunchpad) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LaunchpadSpawner, 0xf0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LaunchpadSpawner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LaunchpadSpawner*, "VROSC", "LaunchpadSpawner");
