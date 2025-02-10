#pragma once
// IWYU pragma private; include "UnityEngine/PlayerPrefs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPrefs)
// Forward declare root types
namespace UnityEngine {
class PlayerPrefs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PlayerPrefs);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PlayerPrefs
class CORDL_TYPE PlayerPrefs : public ::System::Object {
public:
// Declarations
/// @brief Method DeleteKey, addr 0x2f859dc, size 0x3c, virtual false, abstract: false, final false
static inline void DeleteKey(::StringW  key) ;

/// @brief Method GetFloat, addr 0x2f85820, size 0x40, virtual false, abstract: false, final false
static inline float_t GetFloat(::StringW  key) ;

/// @brief Method GetFloat, addr 0x2f857d4, size 0x4c, virtual false, abstract: false, final false
static inline float_t GetFloat(::StringW  key, float_t  defaultValue) ;

/// @brief Method GetInt, addr 0x2f856fc, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetInt(::StringW  key) ;

/// @brief Method GetInt, addr 0x2f856b8, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetInt(::StringW  key, int32_t  defaultValue) ;

/// @brief Method GetString, addr 0x2f85934, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW GetString(::StringW  key) ;

/// @brief Method GetString, addr 0x2f858f0, size 0x44, virtual false, abstract: false, final false
static inline ::StringW GetString(::StringW  key, ::StringW  defaultValue) ;

/// @brief Method HasKey, addr 0x2f859a0, size 0x3c, virtual false, abstract: false, final false
static inline bool HasKey(::StringW  key) ;

/// @brief Method Save, addr 0x2f85a18, size 0x28, virtual false, abstract: false, final false
static inline void Save() ;

/// @brief Method SetFloat, addr 0x2f8573c, size 0x98, virtual false, abstract: false, final false
static inline void SetFloat(::StringW  key, float_t  value) ;

/// @brief Method SetInt, addr 0x2f85628, size 0x90, virtual false, abstract: false, final false
static inline void SetInt(::StringW  key, int32_t  value) ;

/// @brief Method SetString, addr 0x2f85860, size 0x90, virtual false, abstract: false, final false
static inline void SetString(::StringW  key, ::StringW  value) ;

/// @brief Method TrySetFloat, addr 0x2f85598, size 0x4c, virtual false, abstract: false, final false
static inline bool TrySetFloat(::StringW  key, float_t  value) ;

/// @brief Method TrySetInt, addr 0x2f85554, size 0x44, virtual false, abstract: false, final false
static inline bool TrySetInt(::StringW  key, int32_t  value) ;

/// @brief Method TrySetSetString, addr 0x2f855e4, size 0x44, virtual false, abstract: false, final false
static inline bool TrySetSetString(::StringW  key, ::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPrefs(PlayerPrefs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPrefs(PlayerPrefs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8536};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerPrefs, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::PlayerPrefs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerPrefs*, "UnityEngine", "PlayerPrefs");
