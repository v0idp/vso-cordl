#pragma once
// IWYU pragma private; include "VROSC/LoopDropzone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopDropzone)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
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
// Forward declare root types
namespace VROSC {
class LoopDropzone;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopDropzone);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopDropzone
class CORDL_TYPE LoopDropzone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Bounds)) ::UnityEngine::Bounds  Bounds;

/// @brief Field OnHovering, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHovering, put=__cordl_internal_set_OnHovering)) ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  OnHovering;

/// @brief Field OnLoopDropped, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoopDropped, put=__cordl_internal_set_OnLoopDropped)) ::System::Func_3<::UnityW<::VROSC::LoopPlayer>,::UnityW<::VROSC::LoopStationGroup>,bool>*  OnLoopDropped;

/// @brief Field _collider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Field _loopStation, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _whenOverObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenOverObjects, put=__cordl_internal_set__whenOverObjects)) ::UnityW<::UnityEngine::GameObject>  _whenOverObjects;

/// @brief Method Drop, addr 0x18a5434, size 0x20, virtual false, abstract: false, final false
inline bool Drop(::VROSC::LoopPlayer*  loopPlayer, ::VROSC::LoopStationGroup*  origin) ;

static inline ::VROSC::LoopDropzone* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18a5294, size 0x88, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetHovering, addr 0x18a53ac, size 0x88, virtual false, abstract: false, final false
inline void SetHovering(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method Setup, addr 0x18a50f0, size 0x34, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation) ;

/// @brief Method ShowHoveringVisually, addr 0x18a51f4, size 0xa0, virtual false, abstract: false, final false
inline void ShowHoveringVisually(bool  active) ;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get_OnHovering() const;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get_OnHovering() ;

constexpr ::System::Func_3<::UnityW<::VROSC::LoopPlayer>,::UnityW<::VROSC::LoopStationGroup>,bool>* const& __cordl_internal_get_OnLoopDropped() const;

constexpr ::System::Func_3<::UnityW<::VROSC::LoopPlayer>,::UnityW<::VROSC::LoopStationGroup>,bool>*& __cordl_internal_get_OnLoopDropped() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__whenOverObjects() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__whenOverObjects() ;

constexpr void __cordl_internal_set_OnHovering(::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

constexpr void __cordl_internal_set_OnLoopDropped(::System::Func_3<::UnityW<::VROSC::LoopPlayer>,::UnityW<::VROSC::LoopStationGroup>,bool>*  value) ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__whenOverObjects(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x18a5454, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Bounds, addr 0x18a50b0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_Bounds() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopDropzone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopDropzone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopDropzone(LoopDropzone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopDropzone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopDropzone(LoopDropzone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{684};

/// @brief Field _collider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

/// @brief Field _whenOverObjects, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____whenOverObjects;

/// @brief Field OnLoopDropped, offset: 0x30, size: 0x8, def value: None
 ::System::Func_3<::UnityW<::VROSC::LoopPlayer>,::UnityW<::VROSC::LoopStationGroup>,bool>*  ___OnLoopDropped;

/// @brief Field OnHovering, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  ___OnHovering;

/// @brief Field _loopStation, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopDropzone, ____collider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopDropzone, ____whenOverObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopDropzone, ___OnLoopDropped) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopDropzone, ___OnHovering) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopDropzone, ____loopStation) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopDropzone, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopDropzone);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopDropzone*, "VROSC", "LoopDropzone");
