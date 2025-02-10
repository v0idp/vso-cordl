#pragma once
// IWYU pragma private; include "VROSC/ObjectActivationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObjectActivationBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace VROSC {
class ObjectActivation;
}
// Forward declare root types
namespace VROSC {
class ObjectActivationBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ObjectActivationBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ObjectActivationBehaviour
class CORDL_TYPE ObjectActivationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Activation, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Activation, put=__cordl_internal_set_Activation)) float_t  Activation;

/// @brief Field _objectActivation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectActivation, put=__cordl_internal_set__objectActivation)) ::UnityW<::VROSC::ObjectActivation>  _objectActivation;

static inline ::VROSC::ObjectActivationBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x176ca14, size 0x20, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x176ca0c, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::ObjectActivation*  objectActivation) ;

constexpr float_t const& __cordl_internal_get_Activation() const;

constexpr float_t& __cordl_internal_get_Activation() ;

constexpr ::UnityW<::VROSC::ObjectActivation> const& __cordl_internal_get__objectActivation() const;

constexpr ::UnityW<::VROSC::ObjectActivation>& __cordl_internal_get__objectActivation() ;

constexpr void __cordl_internal_set_Activation(float_t  value) ;

constexpr void __cordl_internal_set__objectActivation(::UnityW<::VROSC::ObjectActivation>  value) ;

/// @brief Method .ctor, addr 0x176cb60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectActivationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectActivationBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectActivationBehaviour(ObjectActivationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectActivationBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectActivationBehaviour(ObjectActivationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1220};

/// @brief Field _objectActivation, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::ObjectActivation>  ____objectActivation;

/// @brief Field Activation, offset: 0x18, size: 0x4, def value: None
 float_t  ___Activation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ObjectActivationBehaviour, ____objectActivation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ObjectActivationBehaviour, ___Activation) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ObjectActivationBehaviour, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ObjectActivationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ObjectActivationBehaviour*, "VROSC", "ObjectActivationBehaviour");
