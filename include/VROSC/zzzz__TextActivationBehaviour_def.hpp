#pragma once
// IWYU pragma private; include "VROSC/TextActivationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextActivationBehaviour)
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC {
class TextActivationBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TextActivationBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TextActivationBehaviour
class CORDL_TYPE TextActivationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Activation, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Activation, put=__cordl_internal_set_Activation)) float_t  Activation;

/// @brief Field Deviation, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Deviation, put=__cordl_internal_set_Deviation)) float_t  Deviation;

/// @brief Field DeviationCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeviationCurve, put=__cordl_internal_set_DeviationCurve)) ::UnityEngine::AnimationCurve*  DeviationCurve;

/// @brief Field _endVertices, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__endVertices, put=__cordl_internal_set__endVertices)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _endVertices;

/// @brief Field _posOffset, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__posOffset, put=__cordl_internal_set__posOffset)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _posOffset;

/// @brief Field _textMesh, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__textMesh, put=__cordl_internal_set__textMesh)) ::UnityW<::TMPro::TextMeshPro>  _textMesh;

/// @brief Field _vertices, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__vertices, put=__cordl_internal_set__vertices)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _vertices;

static inline ::VROSC::TextActivationBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x176ce04, size 0x314, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x176cc98, size 0x164, virtual false, abstract: false, final false
inline void Setup(::TMPro::TextMeshPro*  textMesh, ::StringW  text) ;

constexpr float_t const& __cordl_internal_get_Activation() const;

constexpr float_t& __cordl_internal_get_Activation() ;

constexpr float_t const& __cordl_internal_get_Deviation() const;

constexpr float_t& __cordl_internal_get_Deviation() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_DeviationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_DeviationCurve() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__endVertices() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__endVertices() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__posOffset() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__posOffset() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__textMesh() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__textMesh() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__vertices() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__vertices() ;

constexpr void __cordl_internal_set_Activation(float_t  value) ;

constexpr void __cordl_internal_set_Deviation(float_t  value) ;

constexpr void __cordl_internal_set_DeviationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__endVertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__posOffset(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__textMesh(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__vertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

/// @brief Method .ctor, addr 0x176d118, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextActivationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextActivationBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextActivationBehaviour(TextActivationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextActivationBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextActivationBehaviour(TextActivationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1222};

/// @brief Field _textMesh, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____textMesh;

/// @brief Field Activation, offset: 0x18, size: 0x4, def value: None
 float_t  ___Activation;

/// @brief Field _vertices, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____vertices;

/// @brief Field _endVertices, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____endVertices;

/// @brief Field _posOffset, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____posOffset;

/// @brief Field Deviation, offset: 0x38, size: 0x4, def value: None
 float_t  ___Deviation;

/// @brief Field DeviationCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___DeviationCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TextActivationBehaviour, ____textMesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextActivationBehaviour, ___Activation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextActivationBehaviour, ____vertices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextActivationBehaviour, ____endVertices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextActivationBehaviour, ____posOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextActivationBehaviour, ___Deviation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextActivationBehaviour, ___DeviationCurve) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TextActivationBehaviour, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TextActivationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TextActivationBehaviour*, "VROSC", "TextActivationBehaviour");
