#pragma once
// IWYU pragma private; include "VROSC/LoopMovingHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LoopMovingHandler)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class LoopDropzone;
}
namespace VROSC {
class LoopPlayer;
}
// Forward declare root types
namespace VROSC {
class LoopMovingHandler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopMovingHandler);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopMovingHandler
class CORDL_TYPE LoopMovingHandler : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsAnyGrabbed, put=set_IsAnyGrabbed)) bool  IsAnyGrabbed;

/// @brief Field OnIsAnyGrabbedChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnIsAnyGrabbedChanged, put=__cordl_internal_set_OnIsAnyGrabbedChanged)) ::System::Action_1<bool>*  OnIsAnyGrabbedChanged;

/// @brief Field <IsAnyGrabbed>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsAnyGrabbed_k__BackingField, put=__cordl_internal_set__IsAnyGrabbed_k__BackingField)) bool  _IsAnyGrabbed_k__BackingField;

/// @brief Field _dropzones, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dropzones, put=__cordl_internal_set__dropzones)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopDropzone>>*  _dropzones;

/// @brief Field _grabbedPlayers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbedPlayers, put=__cordl_internal_set__grabbedPlayers)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  _grabbedPlayers;

/// @brief Method Add, addr 0x18a5124, size 0xd0, virtual false, abstract: false, final false
inline void Add(::VROSC::LoopDropzone*  dropzone) ;

/// @brief Method GetClosest, addr 0x18a5664, size 0x290, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopDropzone> GetClosest(::UnityEngine::Vector3  point, ::UnityEngine::Collider*  volume) ;

/// @brief Method IsZoneIntersecting, addr 0x18a58f4, size 0x148, virtual false, abstract: false, final false
inline bool IsZoneIntersecting(::VROSC::LoopDropzone*  zone, ::UnityEngine::Collider*  volume) ;

static inline ::VROSC::LoopMovingHandler* New_ctor() ;

/// @brief Method OnLoopDropped, addr 0x18a55d8, size 0x8c, virtual false, abstract: false, final false
inline void OnLoopDropped(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method OnLoopGrabbed, addr 0x18a5470, size 0xd0, virtual false, abstract: false, final false
inline void OnLoopGrabbed(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method Remove, addr 0x18a531c, size 0x90, virtual false, abstract: false, final false
inline void Remove(::VROSC::LoopDropzone*  dropzone) ;

/// @brief Method UpdateIsGrabbed, addr 0x18a5540, size 0x98, virtual false, abstract: false, final false
inline void UpdateIsGrabbed() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnIsAnyGrabbedChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnIsAnyGrabbedChanged() ;

constexpr bool const& __cordl_internal_get__IsAnyGrabbed_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsAnyGrabbed_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopDropzone>>* const& __cordl_internal_get__dropzones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopDropzone>>*& __cordl_internal_get__dropzones() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get__grabbedPlayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get__grabbedPlayers() ;

constexpr void __cordl_internal_set_OnIsAnyGrabbedChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__IsAnyGrabbed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__dropzones(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopDropzone>>*  value) ;

constexpr void __cordl_internal_set__grabbedPlayers(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

/// @brief Method .ctor, addr 0x18a5a3c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsAnyGrabbed, addr 0x18a5468, size 0x8, virtual false, abstract: false, final false
inline bool get_IsAnyGrabbed() ;

/// @brief Method set_IsAnyGrabbed, addr 0x18a545c, size 0xc, virtual false, abstract: false, final false
inline void set_IsAnyGrabbed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopMovingHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopMovingHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopMovingHandler(LoopMovingHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopMovingHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopMovingHandler(LoopMovingHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{685};

/// @brief Field _dropzones, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopDropzone>>*  ____dropzones;

/// @brief Field _grabbedPlayers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  ____grabbedPlayers;

/// @brief Field <IsAnyGrabbed>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsAnyGrabbed_k__BackingField;

/// @brief Field OnIsAnyGrabbedChanged, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnIsAnyGrabbedChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopMovingHandler, ____dropzones) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMovingHandler, ____grabbedPlayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMovingHandler, ____IsAnyGrabbed_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMovingHandler, ___OnIsAnyGrabbedChanged) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopMovingHandler, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopMovingHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopMovingHandler*, "VROSC", "LoopMovingHandler");
