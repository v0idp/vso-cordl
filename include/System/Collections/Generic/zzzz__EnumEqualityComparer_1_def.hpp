#pragma once
// IWYU pragma private; include "System/Collections/Generic/EnumEqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumEqualityComparer_1)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class EnumEqualityComparer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::EnumEqualityComparer_1);
// Dependencies System.Collections.Generic.EqualityComparer`1<T>, System.Runtime.Serialization.ISerializable
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Collections.Generic.EnumEqualityComparer`1<T>
class CORDL_TYPE EnumEqualityComparer_1 : public ::System::Collections::Generic::EqualityComparer_1<T> {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(T  x, T  y) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode(T  obj) ;

/// @brief Method GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Collections::Generic::EnumEqualityComparer_1<T>* New_ctor() ;

static inline ::System::Collections::Generic::EnumEqualityComparer_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  information, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  information, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumEqualityComparer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumEqualityComparer_1(EnumEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumEqualityComparer_1(EnumEqualityComparer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3529};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::EnumEqualityComparer_1, "System.Collections.Generic", "EnumEqualityComparer`1");
