#pragma once
// IWYU pragma private; include "VROSC/ShaderFloatOnSignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShaderFloatOnSignal)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC {
class FloatField;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class ShaderFloatOnSignal;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ShaderFloatOnSignal);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ShaderFloatOnSignal
class CORDL_TYPE ShaderFloatOnSignal : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _materialInstance, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialInstance, put=__cordl_internal_set__materialInstance)) ::UnityW<::UnityEngine::Material>  _materialInstance;

/// @brief Field _outputRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputRenderer, put=__cordl_internal_set__outputRenderer)) ::UnityW<::UnityEngine::Renderer>  _outputRenderer;

/// @brief Field _startValue, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__startValue, put=__cordl_internal_set__startValue)) ::VROSC::FloatField*  _startValue;

/// @brief Field _valueName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueName, put=__cordl_internal_set__valueName)) ::StringW  _valueName;

/// @brief Method Awake, addr 0x1729364, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::ShaderFloatOnSignal* New_ctor() ;

/// @brief Method NodeBegin, addr 0x17293c8, size 0x18, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x17293f8, size 0x18, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method SetValue, addr 0x17293a4, size 0x24, virtual false, abstract: false, final false
inline void SetValue(float_t  value) ;

/// @brief Method StayOn, addr 0x1729410, size 0x18, virtual false, abstract: false, final false
inline void StayOn(::VROSC::Signal*  signal) ;

/// @brief Method TurnOn, addr 0x17293e0, size 0x18, virtual false, abstract: false, final false
inline void TurnOn(::VROSC::Signal*  signal) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialInstance() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__outputRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__outputRenderer() ;

constexpr ::VROSC::FloatField* const& __cordl_internal_get__startValue() const;

constexpr ::VROSC::FloatField*& __cordl_internal_get__startValue() ;

constexpr ::StringW const& __cordl_internal_get__valueName() const;

constexpr ::StringW& __cordl_internal_get__valueName() ;

constexpr void __cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__outputRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__startValue(::VROSC::FloatField*  value) ;

constexpr void __cordl_internal_set__valueName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1729428, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderFloatOnSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderFloatOnSignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderFloatOnSignal(ShaderFloatOnSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderFloatOnSignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderFloatOnSignal(ShaderFloatOnSignal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1037};

/// @brief Field _outputRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____outputRenderer;

/// @brief Field _valueName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____valueName;

/// @brief Field _startValue, offset: 0x58, size: 0x8, def value: None
 ::VROSC::FloatField*  ____startValue;

/// @brief Field _materialInstance, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ShaderFloatOnSignal, ____outputRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ShaderFloatOnSignal, ____valueName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ShaderFloatOnSignal, ____startValue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ShaderFloatOnSignal, ____materialInstance) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ShaderFloatOnSignal, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ShaderFloatOnSignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ShaderFloatOnSignal*, "VROSC", "ShaderFloatOnSignal");
