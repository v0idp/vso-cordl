#pragma once
// IWYU pragma private; include "VROSC/DisableColldiersBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableColldiersBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace VROSC {
class DisableColldiersBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DisableColldiersBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DisableColldiersBehaviour
class CORDL_TYPE DisableColldiersBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Disable, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Disable, put=__cordl_internal_set_Disable)) bool  Disable;

/// @brief Field _activeAtStart, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeAtStart, put=__cordl_internal_set__activeAtStart)) ::ArrayW<bool,::Array<bool>*>  _activeAtStart;

/// @brief Field _colliders, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliders, put=__cordl_internal_set__colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  _colliders;

/// @brief Field _root, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) ::UnityW<::UnityEngine::GameObject>  _root;

static inline ::VROSC::DisableColldiersBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x1768758, size 0x148, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x176865c, size 0xf4, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::GameObject*  root) ;

constexpr bool const& __cordl_internal_get_Disable() const;

constexpr bool& __cordl_internal_get_Disable() ;

constexpr ::ArrayW<bool,::Array<bool>*> const& __cordl_internal_get__activeAtStart() const;

constexpr ::ArrayW<bool,::Array<bool>*>& __cordl_internal_get__activeAtStart() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get__colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get__colliders() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__root() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__root() ;

constexpr void __cordl_internal_set_Disable(bool  value) ;

constexpr void __cordl_internal_set__activeAtStart(::ArrayW<bool,::Array<bool>*>  value) ;

constexpr void __cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  value) ;

constexpr void __cordl_internal_set__root(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x17688a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisableColldiersBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisableColldiersBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableColldiersBehaviour(DisableColldiersBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableColldiersBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableColldiersBehaviour(DisableColldiersBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1205};

/// @brief Field Disable, offset: 0x10, size: 0x1, def value: None
 bool  ___Disable;

/// @brief Field _root, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____root;

/// @brief Field _colliders, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  ____colliders;

/// @brief Field _activeAtStart, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<bool,::Array<bool>*>  ____activeAtStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DisableColldiersBehaviour, ___Disable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::DisableColldiersBehaviour, ____root) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::DisableColldiersBehaviour, ____colliders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DisableColldiersBehaviour, ____activeAtStart) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DisableColldiersBehaviour, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DisableColldiersBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DisableColldiersBehaviour*, "VROSC", "DisableColldiersBehaviour");
