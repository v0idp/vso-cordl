#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Data/DataGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/Data/zzzz__IDataGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataGenerator)
namespace System {
struct DateTime;
}
namespace Unity::Services::Analytics::Data {
struct DataGenerator_SessionEndState;
}
namespace Unity::Services::Analytics::Data {
class StdCommonParams;
}
namespace Unity::Services::Analytics::Internal {
class IBuffer;
}
// Forward declare root types
namespace Unity::Services::Analytics::Data {
struct DataGenerator_SessionEndState;
}
namespace Unity::Services::Analytics::Data {
class DataGenerator;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Analytics::Data::DataGenerator_SessionEndState);
MARK_REF_PTR_T(::Unity::Services::Analytics::Data::DataGenerator);
// Dependencies 
namespace Unity::Services::Analytics::Data {
// Is value type: true
// CS Name: Unity.Services.Analytics.Data.DataGenerator/SessionEndState
struct CORDL_TYPE DataGenerator_SessionEndState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DataGenerator_SessionEndState_Unwrapped
enum struct __DataGenerator_SessionEndState_Unwrapped : int32_t {
__E_PAUSED = static_cast<int32_t>(0x0),
__E_KILLEDINBACKGROUND = static_cast<int32_t>(0x1),
__E_KILLEDINFOREGROUND = static_cast<int32_t>(0x2),
__E_QUIT = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DataGenerator_SessionEndState_Unwrapped () const noexcept {
return static_cast<__DataGenerator_SessionEndState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DataGenerator_SessionEndState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DataGenerator_SessionEndState(int32_t  value__) noexcept;

/// @brief Field KILLEDINBACKGROUND value: I32(1)
static ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState const KILLEDINBACKGROUND;

/// @brief Field KILLEDINFOREGROUND value: I32(2)
static ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState const KILLEDINFOREGROUND;

/// @brief Field PAUSED value: I32(0)
static ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState const PAUSED;

/// @brief Field QUIT value: I32(3)
static ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState const QUIT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11868};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Data::DataGenerator_SessionEndState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Data::DataGenerator_SessionEndState, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Data
// Dependencies System.Object, Unity.Services.Analytics.Data.IDataGenerator
namespace Unity::Services::Analytics::Data {
// Is value type: false
// CS Name: Unity.Services.Analytics.Data.DataGenerator
class CORDL_TYPE DataGenerator : public ::System::Object {
public:
// Declarations
using SessionEndState = ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState;

/// @brief Field m_Buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Buffer, put=__cordl_internal_set_m_Buffer)) ::Unity::Services::Analytics::Internal::IBuffer*  m_Buffer;

/// @brief Convert operator to "::Unity::Services::Analytics::Data::IDataGenerator"
constexpr operator  ::Unity::Services::Analytics::Data::IDataGenerator*() noexcept;

/// @brief Method GameEnded, addr 0x2e8fa80, size 0x268, virtual true, abstract: false, final true
inline void GameEnded(::System::DateTime  datetime, ::Unity::Services::Analytics::Data::StdCommonParams*  commonParams, ::StringW  callingMethodIdentifier, ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState  quitState) ;

/// @brief Method GameRunning, addr 0x2e8f8dc, size 0x1a4, virtual true, abstract: false, final true
inline void GameRunning(::System::DateTime  datetime, ::Unity::Services::Analytics::Data::StdCommonParams*  commonParams, ::StringW  callingMethodIdentifier) ;

static inline ::Unity::Services::Analytics::Data::DataGenerator* New_ctor() ;

/// @brief Method SetBuffer, addr 0x2e8f8d4, size 0x8, virtual true, abstract: false, final true
inline void SetBuffer(::Unity::Services::Analytics::Internal::IBuffer*  buffer) ;

constexpr ::Unity::Services::Analytics::Internal::IBuffer* const& __cordl_internal_get_m_Buffer() const;

constexpr ::Unity::Services::Analytics::Internal::IBuffer*& __cordl_internal_get_m_Buffer() ;

constexpr void __cordl_internal_set_m_Buffer(::Unity::Services::Analytics::Internal::IBuffer*  value) ;

/// @brief Method .ctor, addr 0x2e8b1c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Analytics::Data::IDataGenerator"
constexpr ::Unity::Services::Analytics::Data::IDataGenerator* i___Unity__Services__Analytics__Data__IDataGenerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataGenerator(DataGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataGenerator(DataGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11869};

/// @brief Field m_Buffer, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IBuffer*  ___m_Buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Data::DataGenerator, ___m_Buffer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Data::DataGenerator, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Data
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Data::DataGenerator_SessionEndState, "Unity.Services.Analytics.Data", "DataGenerator/SessionEndState");
NEED_NO_BOX(::Unity::Services::Analytics::Data::DataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Data::DataGenerator*, "Unity.Services.Analytics.Data", "DataGenerator");
