#pragma once
// IWYU pragma private; include "UnityEngine/Internal/InputUnsafeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUnsafeUtility)
// Forward declare root types
namespace UnityEngine::Internal {
class InputUnsafeUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Internal::InputUnsafeUtility);
// Dependencies System.Object
namespace UnityEngine::Internal {
// Is value type: false
// CS Name: UnityEngine.Internal.InputUnsafeUtility
class CORDL_TYPE InputUnsafeUtility : public ::System::Object {
public:
// Declarations
/// @brief Method GetAxis, addr 0x2fbd510, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetAxis(::StringW  axisName) ;

/// @brief Method GetAxisRaw, addr 0x2fbd588, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetAxisRaw(::StringW  axisName) ;

/// @brief Method GetAxisRaw__Unmanaged, addr 0x2fbf2a4, size 0x44, virtual false, abstract: false, final false
static inline float_t GetAxisRaw__Unmanaged(::cordl_internals::Ptr<uint8_t>  axisName, int32_t  axisNameLen) ;

/// @brief Method GetAxis__Unmanaged, addr 0x2fbf260, size 0x44, virtual false, abstract: false, final false
static inline float_t GetAxis__Unmanaged(::cordl_internals::Ptr<uint8_t>  axisName, int32_t  axisNameLen) ;

/// @brief Method GetButtonDown, addr 0x2fbd600, size 0x3c, virtual false, abstract: false, final false
static inline bool GetButtonDown(::StringW  buttonName) ;

/// @brief Method GetButtonDown__Unmanaged, addr 0x2fbf32c, size 0x44, virtual false, abstract: false, final false
static inline uint8_t GetButtonDown__Unmanaged(::cordl_internals::Ptr<uint8_t>  buttonName, int32_t  buttonNameLen) ;

/// @brief Method GetButtonUp__Unmanaged, addr 0x2fbf370, size 0x44, virtual false, abstract: false, final false
static inline bool GetButtonUp__Unmanaged(::cordl_internals::Ptr<uint8_t>  buttonName, int32_t  buttonNameLen) ;

/// @brief Method GetButton__Unmanaged, addr 0x2fbf2e8, size 0x44, virtual false, abstract: false, final false
static inline bool GetButton__Unmanaged(::cordl_internals::Ptr<uint8_t>  buttonName, int32_t  buttonNameLen) ;

/// @brief Method GetKeyDownString, addr 0x2fbdb00, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKeyDownString(::StringW  name) ;

/// @brief Method GetKeyDownString__Unmanaged, addr 0x2fbf21c, size 0x44, virtual false, abstract: false, final false
static inline bool GetKeyDownString__Unmanaged(::cordl_internals::Ptr<uint8_t>  name, int32_t  nameLen) ;

/// @brief Method GetKeyString, addr 0x2fbd998, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKeyString(::StringW  name) ;

/// @brief Method GetKeyString__Unmanaged, addr 0x2fbf194, size 0x44, virtual false, abstract: false, final false
static inline bool GetKeyString__Unmanaged(::cordl_internals::Ptr<uint8_t>  name, int32_t  nameLen) ;

/// @brief Method GetKeyUpString, addr 0x2fbda4c, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKeyUpString(::StringW  name) ;

/// @brief Method GetKeyUpString__Unmanaged, addr 0x2fbf1d8, size 0x44, virtual false, abstract: false, final false
static inline bool GetKeyUpString__Unmanaged(::cordl_internals::Ptr<uint8_t>  name, int32_t  nameLen) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputUnsafeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputUnsafeUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputUnsafeUtility(InputUnsafeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputUnsafeUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputUnsafeUtility(InputUnsafeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12280};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Internal::InputUnsafeUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Internal
NEED_NO_BOX(::UnityEngine::Internal::InputUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal::InputUnsafeUtility*, "UnityEngine.Internal", "InputUnsafeUtility");
