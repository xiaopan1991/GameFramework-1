local GdiBase = require('script.lib.ui.gdibase')

local modname = 'GdiQR'
local M = GdiBase:new()
_G[modname] = M
package.loaded[modname] = M

function M:new(o)
	o = o or GdiBase:new(o)
	o.type = 1102
	o.text = o.text or ''
	o.opacity = o.opacity or 1.0
	o.start = false
	setmetatable(o, self)
	self.__index = self
	return o;
end

return M