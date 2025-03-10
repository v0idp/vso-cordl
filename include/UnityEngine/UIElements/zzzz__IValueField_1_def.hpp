#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IValueField_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IValueField_1)
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class IValueField_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::IValueField_1);
// Dependencies 
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.IValueField`1<T>
class CORDL_TYPE IValueField_1 {
public:
// Declarations
 __declspec(property(get=get_value, put=set_value)) T  value;

/// @brief Method ApplyInputDeviceDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyInputDeviceDelta(::UnityEngine::Vector3  delta, ::UnityEngine::UIElements::DeltaSpeed  speed, T  startValue) ;

/// @brief Method StartDragging, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StartDragging() ;

/// @brief Method StopDragging, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopDragging() ;

/// @brief Method get_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T get_value() ;

/// @brief Method set_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_value(T  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IValueField_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IValueField_1(IValueField_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3884};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::IValueField_1, "UnityEngine.UIElements", "IValueField`1");
