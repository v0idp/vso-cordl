#pragma once
// IWYU pragma private; include "System/IO/Compression/DeflaterManaged.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeflaterManaged)
namespace System::IO::Compression {
class CopyEncoder;
}
namespace System::IO::Compression {
class DeflateInput;
}
namespace System::IO::Compression {
struct DeflaterManaged_DeflaterState;
}
namespace System::IO::Compression {
class FastEncoder;
}
namespace System::IO::Compression {
class OutputBuffer;
}
// Forward declare root types
namespace System::IO::Compression {
struct DeflaterManaged_DeflaterState;
}
namespace System::IO::Compression {
class DeflaterManaged;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::DeflaterManaged_DeflaterState);
MARK_REF_PTR_T(::System::IO::Compression::DeflaterManaged);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.DeflaterManaged/DeflaterState
struct CORDL_TYPE DeflaterManaged_DeflaterState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeflaterManaged_DeflaterState_Unwrapped
enum struct __DeflaterManaged_DeflaterState_Unwrapped : int32_t {
__E_NotStarted = static_cast<int32_t>(0x0),
__E_SlowDownForIncompressible1 = static_cast<int32_t>(0x1),
__E_SlowDownForIncompressible2 = static_cast<int32_t>(0x2),
__E_StartingSmallData = static_cast<int32_t>(0x3),
__E_CompressThenCheck = static_cast<int32_t>(0x4),
__E_CheckingForIncompressible = static_cast<int32_t>(0x5),
__E_HandlingSmallData = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeflaterManaged_DeflaterState_Unwrapped () const noexcept {
return static_cast<__DeflaterManaged_DeflaterState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeflaterManaged_DeflaterState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DeflaterManaged_DeflaterState(int32_t  value__) noexcept;

/// @brief Field CheckingForIncompressible value: I32(5)
static ::System::IO::Compression::DeflaterManaged_DeflaterState const CheckingForIncompressible;

/// @brief Field CompressThenCheck value: I32(4)
static ::System::IO::Compression::DeflaterManaged_DeflaterState const CompressThenCheck;

/// @brief Field HandlingSmallData value: I32(6)
static ::System::IO::Compression::DeflaterManaged_DeflaterState const HandlingSmallData;

/// @brief Field NotStarted value: I32(0)
static ::System::IO::Compression::DeflaterManaged_DeflaterState const NotStarted;

/// @brief Field SlowDownForIncompressible1 value: I32(1)
static ::System::IO::Compression::DeflaterManaged_DeflaterState const SlowDownForIncompressible1;

/// @brief Field SlowDownForIncompressible2 value: I32(2)
static ::System::IO::Compression::DeflaterManaged_DeflaterState const SlowDownForIncompressible2;

/// @brief Field StartingSmallData value: I32(3)
static ::System::IO::Compression::DeflaterManaged_DeflaterState const StartingSmallData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11274};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::DeflaterManaged_DeflaterState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflaterManaged_DeflaterState, 0x4>, "Size mismatch!");

} // namespace end def System::IO::Compression
// Dependencies System.IO.Compression.DeflaterManaged::DeflaterState, System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.DeflaterManaged
class CORDL_TYPE DeflaterManaged : public ::System::Object {
public:
// Declarations
using DeflaterState = ::System::IO::Compression::DeflaterManaged_DeflaterState;

/// @brief Field _copyEncoder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__copyEncoder, put=__cordl_internal_set__copyEncoder)) ::System::IO::Compression::CopyEncoder*  _copyEncoder;

/// @brief Field _deflateEncoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__deflateEncoder, put=__cordl_internal_set__deflateEncoder)) ::System::IO::Compression::FastEncoder*  _deflateEncoder;

/// @brief Field _input, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__input, put=__cordl_internal_set__input)) ::System::IO::Compression::DeflateInput*  _input;

/// @brief Field _inputFromHistory, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputFromHistory, put=__cordl_internal_set__inputFromHistory)) ::System::IO::Compression::DeflateInput*  _inputFromHistory;

/// @brief Field _output, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::System::IO::Compression::OutputBuffer*  _output;

/// @brief Field _processingState, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__processingState, put=__cordl_internal_set__processingState)) ::System::IO::Compression::DeflaterManaged_DeflaterState  _processingState;

/// @brief Method Dispose, addr 0x2b0d468, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finish, addr 0x2b0c528, size 0x88, virtual false, abstract: false, final false
inline bool Finish(::ArrayW<uint8_t,::Array<uint8_t>*>  outputBuffer, ::ByRef<int32_t>  bytesRead) ;

/// @brief Method FlushInputWindows, addr 0x2b0d3a0, size 0x20, virtual false, abstract: false, final false
inline void FlushInputWindows() ;

/// @brief Method GetDeflateOutput, addr 0x2b0c12c, size 0x23c, virtual false, abstract: false, final false
inline int32_t GetDeflateOutput(::ArrayW<uint8_t,::Array<uint8_t>*>  outputBuffer) ;

/// @brief Method NeedsInput, addr 0x2b0c368, size 0x44, virtual false, abstract: false, final false
inline bool NeedsInput() ;

/// @brief Method SetInput, addr 0x2b0c0d8, size 0x54, virtual false, abstract: false, final false
inline void SetInput(::ArrayW<uint8_t,::Array<uint8_t>*>  inputBuffer, int32_t  startIndex, int32_t  count) ;

/// @brief Method UseCompressed, addr 0x2b0d380, size 0x10, virtual false, abstract: false, final false
inline bool UseCompressed(double_t  ratio) ;

/// @brief Method WriteFinal, addr 0x2b0d440, size 0x28, virtual false, abstract: false, final false
inline void WriteFinal() ;

constexpr ::System::IO::Compression::CopyEncoder* const& __cordl_internal_get__copyEncoder() const;

constexpr ::System::IO::Compression::CopyEncoder*& __cordl_internal_get__copyEncoder() ;

constexpr ::System::IO::Compression::FastEncoder* const& __cordl_internal_get__deflateEncoder() const;

constexpr ::System::IO::Compression::FastEncoder*& __cordl_internal_get__deflateEncoder() ;

constexpr ::System::IO::Compression::DeflateInput* const& __cordl_internal_get__input() const;

constexpr ::System::IO::Compression::DeflateInput*& __cordl_internal_get__input() ;

constexpr ::System::IO::Compression::DeflateInput* const& __cordl_internal_get__inputFromHistory() const;

constexpr ::System::IO::Compression::DeflateInput*& __cordl_internal_get__inputFromHistory() ;

constexpr ::System::IO::Compression::OutputBuffer* const& __cordl_internal_get__output() const;

constexpr ::System::IO::Compression::OutputBuffer*& __cordl_internal_get__output() ;

constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState const& __cordl_internal_get__processingState() const;

constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState& __cordl_internal_get__processingState() ;

constexpr void __cordl_internal_set__copyEncoder(::System::IO::Compression::CopyEncoder*  value) ;

constexpr void __cordl_internal_set__deflateEncoder(::System::IO::Compression::FastEncoder*  value) ;

constexpr void __cordl_internal_set__input(::System::IO::Compression::DeflateInput*  value) ;

constexpr void __cordl_internal_set__inputFromHistory(::System::IO::Compression::DeflateInput*  value) ;

constexpr void __cordl_internal_set__output(::System::IO::Compression::OutputBuffer*  value) ;

constexpr void __cordl_internal_set__processingState(::System::IO::Compression::DeflaterManaged_DeflaterState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflaterManaged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflaterManaged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflaterManaged(DeflaterManaged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflaterManaged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflaterManaged(DeflaterManaged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11275};

/// @brief Field _deflateEncoder, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Compression::FastEncoder*  ____deflateEncoder;

/// @brief Field _copyEncoder, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Compression::CopyEncoder*  ____copyEncoder;

/// @brief Field _input, offset: 0x20, size: 0x8, def value: None
 ::System::IO::Compression::DeflateInput*  ____input;

/// @brief Field _output, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Compression::OutputBuffer*  ____output;

/// @brief Field _processingState, offset: 0x30, size: 0x4, def value: None
 ::System::IO::Compression::DeflaterManaged_DeflaterState  ____processingState;

/// @brief Field _inputFromHistory, offset: 0x38, size: 0x8, def value: None
 ::System::IO::Compression::DeflateInput*  ____inputFromHistory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::DeflaterManaged, ____deflateEncoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflaterManaged, ____copyEncoder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflaterManaged, ____input) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflaterManaged, ____output) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflaterManaged, ____processingState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflaterManaged, ____inputFromHistory) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflaterManaged, 0x40>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflaterManaged_DeflaterState, "System.IO.Compression", "DeflaterManaged/DeflaterState");
NEED_NO_BOX(::System::IO::Compression::DeflaterManaged);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflaterManaged*, "System.IO.Compression", "DeflaterManaged");
