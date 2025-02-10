#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IBuffer)
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class IBuffer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::IBuffer);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.IBuffer
class CORDL_TYPE IBuffer {
public:
// Declarations
 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Method ClearBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearBuffer() ;

/// @brief Method ClearBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearBuffer(int64_t  upTo) ;

/// @brief Method ClearDiskCache, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearDiskCache() ;

/// @brief Method FlushToDisk, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void FlushToDisk() ;

/// @brief Method PushDouble, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PushDouble(double_t  val, ::StringW  name) ;

/// @brief Method PushEndEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PushEndEvent() ;

/// @brief Method PushStartEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PushStartEvent(::StringW  name, ::System::DateTime  datetime, ::System::Nullable_1<int64_t>  eventVersion, bool  addPlayerIdsToEventBody) ;

/// @brief Method PushString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PushString(::StringW  val, ::StringW  name) ;

/// @brief Method Serialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Serialize() ;

/// @brief Method get_Length, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Length() ;

// Ctor Parameters [CppParam { name: "", ty: "IBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBuffer(IBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11874};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::IBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::IBuffer*, "Unity.Services.Analytics.Internal", "IBuffer");
