#pragma once
// IWYU pragma private; include "UnityEngine/Gyroscope.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gyroscope)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Gyroscope;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Gyroscope);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Gyroscope
class CORDL_TYPE Gyroscope : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_enabled)) bool  enabled;

/// @brief Field m_GyroIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GyroIndex, put=__cordl_internal_set_m_GyroIndex)) int32_t  m_GyroIndex;

 __declspec(property(get=get_rotationRateUnbiased)) ::UnityEngine::Vector3  rotationRateUnbiased;

static inline ::UnityEngine::Gyroscope* New_ctor(int32_t  index) ;

constexpr int32_t const& __cordl_internal_get_m_GyroIndex() const;

constexpr int32_t& __cordl_internal_get_m_GyroIndex() ;

constexpr void __cordl_internal_set_m_GyroIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x2fbd1ec, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

/// @brief Method get_rotationRateUnbiased, addr 0x2fbd2f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_rotationRateUnbiased() ;

/// @brief Method rotationRateUnbiased_Internal, addr 0x2fbd214, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 rotationRateUnbiased_Internal(int32_t  idx) ;

/// @brief Method rotationRateUnbiased_Internal_Injected, addr 0x2fbd270, size 0x44, virtual false, abstract: false, final false
static inline void rotationRateUnbiased_Internal_Injected(int32_t  idx, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method setEnabled_Internal, addr 0x2fbd2b4, size 0x44, virtual false, abstract: false, final false
static inline void setEnabled_Internal(int32_t  idx, bool  enabled) ;

/// @brief Method set_enabled, addr 0x2fbd300, size 0x44, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Gyroscope() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Gyroscope", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Gyroscope(Gyroscope && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gyroscope", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gyroscope(Gyroscope const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12275};

/// @brief Field m_GyroIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_GyroIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Gyroscope, ___m_GyroIndex) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Gyroscope, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Gyroscope);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Gyroscope*, "UnityEngine", "Gyroscope");
