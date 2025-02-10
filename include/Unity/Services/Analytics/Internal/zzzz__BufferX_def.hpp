#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/BufferX.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferX)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class MemoryStream;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Services::Analytics::Internal {
class IBufferIds;
}
namespace Unity::Services::Analytics::Internal {
class IBufferSystemCalls;
}
namespace Unity::Services::Analytics::Internal {
class IDiskCache;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class BufferX;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::BufferX);
// Dependencies System.Object, Unity.Services.Analytics.Internal.IBuffer
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.BufferX
class CORDL_TYPE BufferX : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field k_BufferHeader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_BufferHeader, put=__cordl_internal_set_k_BufferHeader)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_BufferHeader;

/// @brief Field k_CloseBraceComma, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_CloseBraceComma, put=__cordl_internal_set_k_CloseBraceComma)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_CloseBraceComma;

/// @brief Field k_CloseBracketComma, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_CloseBracketComma, put=__cordl_internal_set_k_CloseBracketComma)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_CloseBracketComma;

/// @brief Field k_CloseEvent, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_CloseEvent, put=__cordl_internal_set_k_CloseEvent)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_CloseEvent;

/// @brief Field k_Comma, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_Comma, put=__cordl_internal_set_k_Comma)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_Comma;

/// @brief Field k_False, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_False, put=__cordl_internal_set_k_False)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_False;

/// @brief Field k_HeaderEventName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_HeaderEventName, put=__cordl_internal_set_k_HeaderEventName)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_HeaderEventName;

/// @brief Field k_HeaderEventUUID, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_HeaderEventUUID, put=__cordl_internal_set_k_HeaderEventUUID)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_HeaderEventUUID;

/// @brief Field k_HeaderEventVersion, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_HeaderEventVersion, put=__cordl_internal_set_k_HeaderEventVersion)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_HeaderEventVersion;

/// @brief Field k_HeaderInstallationID, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_HeaderInstallationID, put=__cordl_internal_set_k_HeaderInstallationID)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_HeaderInstallationID;

/// @brief Field k_HeaderOpenEventParams, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_HeaderOpenEventParams, put=__cordl_internal_set_k_HeaderOpenEventParams)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_HeaderOpenEventParams;

/// @brief Field k_HeaderPlayerID, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_HeaderPlayerID, put=__cordl_internal_set_k_HeaderPlayerID)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_HeaderPlayerID;

/// @brief Field k_HeaderSessionID, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_HeaderSessionID, put=__cordl_internal_set_k_HeaderSessionID)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_HeaderSessionID;

/// @brief Field k_HeaderTimestamp, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_HeaderTimestamp, put=__cordl_internal_set_k_HeaderTimestamp)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_HeaderTimestamp;

/// @brief Field k_HeaderUserName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_HeaderUserName, put=__cordl_internal_set_k_HeaderUserName)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_HeaderUserName;

/// @brief Field k_OpenBrace, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_OpenBrace, put=__cordl_internal_set_k_OpenBrace)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_OpenBrace;

/// @brief Field k_OpenBracket, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_OpenBracket, put=__cordl_internal_set_k_OpenBracket)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_OpenBracket;

/// @brief Field k_Quote, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_k_Quote, put=__cordl_internal_set_k_Quote)) uint8_t  k_Quote;

/// @brief Field k_QuoteColon, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_QuoteColon, put=__cordl_internal_set_k_QuoteColon)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_QuoteColon;

/// @brief Field k_QuoteComma, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_QuoteComma, put=__cordl_internal_set_k_QuoteComma)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_QuoteComma;

/// @brief Field k_True, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_True, put=__cordl_internal_set_k_True)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_True;

/// @brief Field k_WorkingBuffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_WorkingBuffer, put=__cordl_internal_set_k_WorkingBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k_WorkingBuffer;

/// @brief Field k_WorkingCharacterBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_WorkingCharacterBuffer, put=__cordl_internal_set_k_WorkingCharacterBuffer)) ::ArrayW<char16_t,::Array<char16_t>*>  k_WorkingCharacterBuffer;

/// @brief Field m_Buffer, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Buffer, put=__cordl_internal_set_m_Buffer)) ::System::IO::MemoryStream*  m_Buffer;

/// @brief Field m_DiskCache, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DiskCache, put=__cordl_internal_set_m_DiskCache)) ::Unity::Services::Analytics::Internal::IDiskCache*  m_DiskCache;

/// @brief Field m_EventEnds, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EventEnds, put=__cordl_internal_set_m_EventEnds)) ::System::Collections::Generic::List_1<int32_t>*  m_EventEnds;

/// @brief Field m_Ids, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ids, put=__cordl_internal_set_m_Ids)) ::Unity::Services::Analytics::Internal::IBufferIds*  m_Ids;

/// @brief Field m_SpareBuffer, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SpareBuffer, put=__cordl_internal_set_m_SpareBuffer)) ::System::IO::MemoryStream*  m_SpareBuffer;

/// @brief Field m_SystemCalls, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SystemCalls, put=__cordl_internal_set_m_SystemCalls)) ::Unity::Services::Analytics::Internal::IBufferSystemCalls*  m_SystemCalls;

/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IBuffer"
constexpr operator  ::Unity::Services::Analytics::Internal::IBuffer*() noexcept;

/// @brief Method ClearBuffer, addr 0x2e904e8, size 0x94, virtual true, abstract: false, final true
inline void ClearBuffer() ;

/// @brief Method ClearBuffer, addr 0x2e915c0, size 0x238, virtual true, abstract: false, final true
inline void ClearBuffer(int64_t  upTo) ;

/// @brief Method ClearDiskCache, addr 0x2e918ac, size 0xa0, virtual true, abstract: false, final true
inline void ClearDiskCache() ;

/// @brief Method FlushToDisk, addr 0x2e917f8, size 0xb4, virtual true, abstract: false, final true
inline void FlushToDisk() ;

/// @brief Method InjectIds, addr 0x2e9057c, size 0x8, virtual false, abstract: false, final false
inline void InjectIds(::Unity::Services::Analytics::Internal::IBufferIds*  ids) ;

static inline ::Unity::Services::Analytics::Internal::BufferX* New_ctor(::Unity::Services::Analytics::Internal::IBufferSystemCalls*  eventIdGenerator, ::Unity::Services::Analytics::Internal::IDiskCache*  diskCache) ;

/// @brief Method PushDouble, addr 0x2e90dc8, size 0xa8, virtual true, abstract: false, final true
inline void PushDouble(double_t  val, ::StringW  name) ;

/// @brief Method PushEndEvent, addr 0x2e90ba4, size 0x224, virtual true, abstract: false, final true
inline void PushEndEvent() ;

/// @brief Method PushStartEvent, addr 0x2e906c8, size 0x430, virtual true, abstract: false, final true
inline void PushStartEvent(::StringW  name, ::System::DateTime  datetime, ::System::Nullable_1<int64_t>  eventVersion, bool  addPlayerIdsToEventBody) ;

/// @brief Method PushString, addr 0x2e90e70, size 0x538, virtual true, abstract: false, final true
inline void PushString(::StringW  value, ::StringW  name) ;

/// @brief Method Serialize, addr 0x2e913a8, size 0x218, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Serialize() ;

/// @brief Method SerializeDateTime, addr 0x2e8d9a8, size 0xac, virtual false, abstract: false, final false
static inline ::StringW SerializeDateTime(::System::DateTime  dateTime) ;

/// @brief Method StripTrailingCommaIfNecessary, addr 0x2e90af8, size 0xac, virtual false, abstract: false, final false
inline void StripTrailingCommaIfNecessary() ;

/// @brief Method WriteByte, addr 0x2e9060c, size 0x28, virtual false, abstract: false, final false
inline void WriteByte(::ByRef<uint8_t>  value) ;

/// @brief Method WriteBytes, addr 0x2e90634, size 0x34, virtual false, abstract: false, final false
inline void WriteBytes(::ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  bytes) ;

/// @brief Method WriteName, addr 0x2e90668, size 0x60, virtual false, abstract: false, final false
inline void WriteName(::StringW  name) ;

/// @brief Method WriteString, addr 0x2e90584, size 0x88, virtual false, abstract: false, final false
inline void WriteString(::ByRef<::StringW>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_BufferHeader() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_BufferHeader() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_CloseBraceComma() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_CloseBraceComma() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_CloseBracketComma() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_CloseBracketComma() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_CloseEvent() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_CloseEvent() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_Comma() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_Comma() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_False() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_False() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_HeaderEventName() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_HeaderEventName() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_HeaderEventUUID() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_HeaderEventUUID() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_HeaderEventVersion() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_HeaderEventVersion() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_HeaderInstallationID() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_HeaderInstallationID() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_HeaderOpenEventParams() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_HeaderOpenEventParams() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_HeaderPlayerID() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_HeaderPlayerID() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_HeaderSessionID() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_HeaderSessionID() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_HeaderTimestamp() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_HeaderTimestamp() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_HeaderUserName() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_HeaderUserName() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_OpenBrace() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_OpenBrace() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_OpenBracket() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_OpenBracket() ;

constexpr uint8_t const& __cordl_internal_get_k_Quote() const;

constexpr uint8_t& __cordl_internal_get_k_Quote() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_QuoteColon() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_QuoteColon() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_QuoteComma() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_QuoteComma() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_True() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_True() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_k_WorkingBuffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_k_WorkingBuffer() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __cordl_internal_get_k_WorkingCharacterBuffer() const;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __cordl_internal_get_k_WorkingCharacterBuffer() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_m_Buffer() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_m_Buffer() ;

constexpr ::Unity::Services::Analytics::Internal::IDiskCache* const& __cordl_internal_get_m_DiskCache() const;

constexpr ::Unity::Services::Analytics::Internal::IDiskCache*& __cordl_internal_get_m_DiskCache() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_EventEnds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_EventEnds() ;

constexpr ::Unity::Services::Analytics::Internal::IBufferIds* const& __cordl_internal_get_m_Ids() const;

constexpr ::Unity::Services::Analytics::Internal::IBufferIds*& __cordl_internal_get_m_Ids() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_m_SpareBuffer() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_m_SpareBuffer() ;

constexpr ::Unity::Services::Analytics::Internal::IBufferSystemCalls* const& __cordl_internal_get_m_SystemCalls() const;

constexpr ::Unity::Services::Analytics::Internal::IBufferSystemCalls*& __cordl_internal_get_m_SystemCalls() ;

constexpr void __cordl_internal_set_k_BufferHeader(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_CloseBraceComma(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_CloseBracketComma(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_CloseEvent(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_Comma(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_False(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_HeaderEventName(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_HeaderEventUUID(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_HeaderEventVersion(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_HeaderInstallationID(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_HeaderOpenEventParams(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_HeaderPlayerID(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_HeaderSessionID(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_HeaderTimestamp(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_HeaderUserName(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_OpenBrace(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_OpenBracket(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_Quote(uint8_t  value) ;

constexpr void __cordl_internal_set_k_QuoteColon(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_QuoteComma(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_True(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_WorkingBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_k_WorkingCharacterBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr void __cordl_internal_set_m_Buffer(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set_m_DiskCache(::Unity::Services::Analytics::Internal::IDiskCache*  value) ;

constexpr void __cordl_internal_set_m_EventEnds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_Ids(::Unity::Services::Analytics::Internal::IBufferIds*  value) ;

constexpr void __cordl_internal_set_m_SpareBuffer(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set_m_SystemCalls(::Unity::Services::Analytics::Internal::IBufferSystemCalls*  value) ;

/// @brief Method .ctor, addr 0x2e8a978, size 0x5f0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Analytics::Internal::IBufferSystemCalls*  eventIdGenerator, ::Unity::Services::Analytics::Internal::IDiskCache*  diskCache) ;

/// @brief Method get_Length, addr 0x2e904c4, size 0x24, virtual true, abstract: false, final true
inline int32_t get_Length() ;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IBuffer"
constexpr ::Unity::Services::Analytics::Internal::IBuffer* i___Unity__Services__Analytics__Internal__IBuffer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferX() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferX", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferX(BufferX && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferX", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferX(BufferX const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11878};

/// @brief Field k_WorkingBuffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_WorkingBuffer;

/// @brief Field k_WorkingCharacterBuffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  ___k_WorkingCharacterBuffer;

/// @brief Field k_BufferHeader, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_BufferHeader;

/// @brief Field k_HeaderEventName, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_HeaderEventName;

/// @brief Field k_HeaderUserName, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_HeaderUserName;

/// @brief Field k_HeaderSessionID, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_HeaderSessionID;

/// @brief Field k_HeaderEventUUID, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_HeaderEventUUID;

/// @brief Field k_HeaderTimestamp, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_HeaderTimestamp;

/// @brief Field k_HeaderEventVersion, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_HeaderEventVersion;

/// @brief Field k_HeaderInstallationID, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_HeaderInstallationID;

/// @brief Field k_HeaderPlayerID, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_HeaderPlayerID;

/// @brief Field k_HeaderOpenEventParams, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_HeaderOpenEventParams;

/// @brief Field k_CloseEvent, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_CloseEvent;

/// @brief Field k_Quote, offset: 0x78, size: 0x1, def value: None
 uint8_t  ___k_Quote;

/// @brief Field k_QuoteColon, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_QuoteColon;

/// @brief Field k_QuoteComma, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_QuoteComma;

/// @brief Field k_Comma, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_Comma;

/// @brief Field k_OpenBrace, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_OpenBrace;

/// @brief Field k_CloseBraceComma, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_CloseBraceComma;

/// @brief Field k_OpenBracket, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_OpenBracket;

/// @brief Field k_CloseBracketComma, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_CloseBracketComma;

/// @brief Field k_True, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_True;

/// @brief Field k_False, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___k_False;

/// @brief Field m_SystemCalls, offset: 0xc8, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IBufferSystemCalls*  ___m_SystemCalls;

/// @brief Field m_DiskCache, offset: 0xd0, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IDiskCache*  ___m_DiskCache;

/// @brief Field m_Ids, offset: 0xd8, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IBufferIds*  ___m_Ids;

/// @brief Field m_EventEnds, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_EventEnds;

/// @brief Field m_SpareBuffer, offset: 0xe8, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___m_SpareBuffer;

/// @brief Field m_Buffer, offset: 0xf0, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___m_Buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_WorkingBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_WorkingCharacterBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_BufferHeader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_HeaderEventName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_HeaderUserName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_HeaderSessionID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_HeaderEventUUID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_HeaderTimestamp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_HeaderEventVersion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_HeaderInstallationID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_HeaderPlayerID) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_HeaderOpenEventParams) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_CloseEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_Quote) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_QuoteColon) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_QuoteComma) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_Comma) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_OpenBrace) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_CloseBraceComma) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_OpenBracket) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_CloseBracketComma) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_True) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___k_False) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___m_SystemCalls) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___m_DiskCache) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___m_Ids) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___m_EventEnds) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___m_SpareBuffer) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::BufferX, ___m_Buffer) == 0xf0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::BufferX, 0xf8>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::BufferX);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::BufferX*, "Unity.Services.Analytics.Internal", "BufferX");
