#pragma once
// IWYU pragma private; include "UnityEngine/BoundsInt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoundsInt)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine {
struct BoundsInt;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoundsInt);
// Dependencies System.IEquatable`1<T>, System.IFormattable, UnityEngine.Vector3Int
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.BoundsInt
struct CORDL_TYPE BoundsInt {
public:
// Declarations
 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3Int  position;

 __declspec(property(get=get_size, put=set_size)) ::UnityEngine::Vector3Int  size;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::BoundsInt>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::BoundsInt>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x2f658ec, size 0xd4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x2f659c0, size 0x78, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::BoundsInt  other) ;

/// @brief Method GetHashCode, addr 0x2f65a38, size 0xd4, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x2f65780, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x2f65790, size 0x15c, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x2f6576c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3Int  position, ::UnityEngine::Vector3Int  size) ;

/// @brief Method get_position, addr 0x2f65734, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int get_position() ;

/// @brief Method get_size, addr 0x2f65750, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int get_size() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::BoundsInt>"
constexpr ::System::IEquatable_1<::UnityEngine::BoundsInt>* i___System__IEquatable_1___UnityEngine__BoundsInt_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method set_position, addr 0x2f65744, size 0xc, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3Int  value) ;

/// @brief Method set_size, addr 0x2f65760, size 0xc, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector3Int  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BoundsInt() ;

// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "m_Size", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }]
constexpr BoundsInt(::UnityEngine::Vector3Int  m_Position, ::UnityEngine::Vector3Int  m_Size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8427};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  m_Position;

/// @brief Field m_Size, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  m_Size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::BoundsInt, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoundsInt, m_Size) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::BoundsInt, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoundsInt, "UnityEngine", "BoundsInt");
